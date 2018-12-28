#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x

if [[ $JOB = "ubuntu16" ]] || [[ $JOB = "ubuntu18" ]]; then
    apt-get -qq update
    if [[ $JOB = "ubuntu18" ]]; then
        apt-get install -y software-properties-common
        add-apt-repository ppa:beineri/opt-qt-5.11.2-bionic
    elif [[ $JOB = "ubuntu16" ]]; then
        apt-get install -y software-properties-common python-software-properties
        add-apt-repository ppa:beineri/opt-qt-5.11.2-xenial
    else
        true;
    fi
    add-apt-repository ppa:gophers/archive

    apt-get -qq update
    apt-cache search golang-
    GOVER=1.9
    apt-get install -y "golang-$GOVER"
    apt-get install -y libffi-dev make gcc git curl cmake
    apt-get install -y mesa-common-dev libglu1-mesa-dev freeglut3-dev
    apt-get install -y qt511base qt511quickcontrols2 qt511multimedia qt511svg
else
    pacman -Suyy --noconfirm
    pacman -S --noconfirm cmake gcc clang base-devel git libffi
    pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects qt5-multimedia qt5-svg
fi

pwd
# checkout libs
QTLIB=/qtlib
export PATH=$QTLIB/bin:$PATH
qtverdir=$(echo "$QTVER"|sed 's/v//'|sed 's/\.//')  # v5.10 => 510
git clone "https://github.com/qtchina/qt${qtverdir}_linux_gcc64" $QTLIB
gzip -dv -f $QTLIB/lib/libQt5WebEngineCore.so.*.gz

pwd
cmake -DUSE_WEBENGINES=off .  # BUG when CI last step, -DUSE_WEBENGINES=on
make -j3
ls -lh libQt5Inline.so
strip -s libQt5Inline.so
ls -lh libQt5Inline.so

if [ x"$TRAVIS_TAG" != x"" ]; then
    curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
    curl -F 'c=@./libQt5Inline.so' https://fars.ee/
fi

