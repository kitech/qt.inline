#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
WINARCH=$1
echo "$0, $1"
cat /etc/issue

echo "[ownstuff]" >> /etc/pacman.conf
echo "SigLevel = Optional TrustAll" >> /etc/pacman.conf
echo "Server = https://martchus.no-ip.biz/repo/arch/ownstuff/os/\$arch" >> /etc/pacman.conf

pacman -Suyy --noconfirm
#pacman -S --noconfirm cmake gcc clang base-devel
#pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects
pacman -S --noconfirm cmake base-devel ccache
pacman -S --noconfirm mingw-w64-cmake mingw-w64-gcc mingw-w64-qt5-base-static mingw-w64-qt5-quickcontrols2

pwd

cd /root/
ls && ls src/

pwd
mkdir x32 x64

if [ x"$WINARCH" = x"x64" ]; then
    ### build x64 version dll
    cd x64
    cmake -DWINARCH=x64 -DCMAKE_TOOLCHAIN_FILE=../tc-mingw.cmake ..
    make -j3
    cd ..

    find -name "libQt5Inline.*"
    ls -lh x64/libQt5Inline*
    x86_64-w64-mingw32-strip -s x64/libQt5Inline.dll
    ls -lh x64/libQt5Inline*

    curl -F 'name=@./x64/libQt5Inline.dll' http://img.vim-cn.com/
    curl -F 'name=@./x64/libQt5Inline.dll.a' http://img.vim-cn.com/
else
    ### build x32 version dll
    cd x32
    cmake -DWINARCH=x32 -DCMAKE_TOOLCHAIN_FILE=../tc-mingw.cmake ..
    make -j3
    cd ..

    find -name "libQt5Inline.*"
    ls -lh x32/libQt5Inline*
    i686-w64-mingw32-strip -s x32/libQt5Inline.dll
    ls -lh x32/libQt5Inline*

    curl -F 'name=@./x32/libQt5Inline.dll' http://img.vim-cn.com/
    curl -F 'name=@./x32/libQt5Inline.dll.a' http://img.vim-cn.com/
fi


curl -F 'name=@/etc/issue' http://img.vim-cn.com/
