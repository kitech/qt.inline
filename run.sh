#!/bin/bash

set -x
cat /etc/issue
pacman -Suyy
pacman -S --noconfirm cmake gcc clang base-devel
pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects
pwd

cd /root/
ls && ls src/

pwd
cmake .
make -j3
ls -lh libQt5Inline.so

