#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
GOVER=$1
echo "$0, $1"
cat /etc/issue
cat /etc/os-release

# not docker, need sudo
sudo apt-get -qq update
sudo apt-get install -y libx11-dev libxcb-icccm4-dev libxcb-image0-dev libxcb-keysyms1-dev libxcb-present-dev libxcb-present-dev libxcb-shm0-dev libxcb-sync-dev libxcb-xfixes0-dev libxcb-xkb-dev libxcb-cursor-dev libxcb-xinerama0-dev libice-dev

source ./.qtenvs
env
pwd
ls

# script:
pwd
export CC=clang CXX=clang++
if [ x"$WITH_QT_STATIC" == x"" ]; then
    WITH_QT_STATIC=off
fi
if [ x"$WITH_QT_STATIC" == x"on" ]; then
    git clone https://github.com/qtchina/qtlib510_linux_x64_static.git
    sudo cp -a qtlib510_linux_x64_static /opt/qt510st
    export PATH=/opt/qt510st/bin:$PATH
else
    if [[ $QTVER = "v5.9" ]]; then
        git clone https://github.com/qtchina/qt59_linux_gcc64.git
        export PATH=`pwd`/qt59_linux_gcc64/bin:$PATH
    else # master
        git clone https://github.com/qtchina/qt510_linux_gcc64.git
        export PATH=`pwd`/qt510_linux_gcc64/bin:$PATH
    fi
fi
cmake -DWITH_QT_STATIC=$WITH_QT_STATIC .

DRYRUN=n  # y/n
if [ x"$DRYRUN" == x"y" ]; then
    true
else
    make -j3
    ls -lh libQt5Inline.so
    strip -s libQt5Inline.so
    ls -lh libQt5Inline.so
    if [ x"$TRAVIS_TAG" != x"" ]; then
        curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
        curl -F 'c=@./libQt5Inline.so' https://fars.ee/
    fi
    objdump -p libQt5Inline.so | grep "NEEDED"
fi

curl -F 'name=@/etc/issue' https://img.vim-cn.com/

