#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
cat /etc/issue
pacman -Suyy --noconfirm
pacman -S --noconfirm cmake gcc clang base-devel
pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects qt5-multimedia qt5-svg

pwd

cd /root/
ls && ls src/

pwd
cmake .
make -j3
ls -lh libQt5Inline.so
strip -s libQt5Inline.so
ls -lh libQt5Inline.so
if [ x"$TRAVIS_TAG" != x"" ]; then
    curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
    curl -F 'c=@./libQt5Inline.so' https://fars.ee/
fi

