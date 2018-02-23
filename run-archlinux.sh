#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
cat /etc/issue
pacman -Suyy --noconfirm
pacman -S --noconfirm cmake gcc clang base-devel
pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects
pwd

cd /root/
ls && ls src/

pwd
cmake .
make -j3
ls -lh libQt5Inline.so
strip -s libQt5Inline.so
ls -lh libQt5Inline.so
curl -F 'name=@./libQt5Inline.so' http://img.vim-cn.com/


