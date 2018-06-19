#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
WINARCH=$1
WITH_QT_STATIC=$2
echo "$0, $1, $2"
cat /etc/issue

echo "[ownstuff]" >> /etc/pacman.conf
echo "SigLevel = Optional TrustAll" >> /etc/pacman.conf
echo "Server = https://martchus.no-ip.biz/repo/arch/ownstuff/os/\$arch" >> /etc/pacman.conf

pacman -Suyy --noconfirm
#pacman -S --noconfirm cmake gcc clang base-devel
#pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects
pacman -S --noconfirm cmake base-devel ccache
pacman -S --noconfirm mingw-w64-cmake mingw-w64-gcc mingw-w64-qt5-base-static mingw-w64-qt5-quickcontrols2 mingw-w64-qt5-multimedia mingw-w64-qt5-svg

pwd

cd /root/
ls && ls src/
which objdump

pwd
mkdir x32 x64

if [ x"$WITH_QT_STATIC" == x"" ]; then
    WITH_QT_STATIC="off"
fi

if [ x"$WINARCH" = x"x64" ]; then
    ### build x64 version dll
    cd x64
    cmake -DWINARCH=x64 -DMINGW_NOIPBIZ=on -DWITH_QT_STATIC="${WITH_QT_STATIC}" -DCMAKE_TOOLCHAIN_FILE=../tc-mingw.cmake ..
    make -j3
    cd ..

    find -name "libQt5Inline.*"
    ls -lh x64/libQt5Inline*
    x86_64-w64-mingw32-strip -s x64/libQt5Inline.dll
    ls -lh x64/libQt5Inline*

    curl -F 'name=@./x64/libQt5Inline.dll' https://img.vim-cn.com/
    curl -F 'name=@./x64/libQt5Inline.dll.a' https://img.vim-cn.com/
    curl -F 'c=@./x64/libQt5Inline.dll' https://fars.ee/
    curl -F 'c=@./x64/libQt5Inline.dll.a' https://fars.ee/
else
    ### build x32 version dll
    cd x32
    cmake -DWINARCH=x32 -DMINGW_NOIPBIZ=on -DWITH_QT_STATIC="${WITH_QT_STATIC}" -DCMAKE_TOOLCHAIN_FILE=../tc-mingw.cmake ..
    make -j3
    cd ..

    find -name "libQt5Inline.*"
    ls -lh x32/libQt5Inline*
    i686-w64-mingw32-strip -s x32/libQt5Inline.dll
    ls -lh x32/libQt5Inline*

    curl -F 'name=@./x32/libQt5Inline.dll' https://img.vim-cn.com/
    curl -F 'name=@./x32/libQt5Inline.dll.a' https://img.vim-cn.com/
    curl -F 'c=@./x32/libQt5Inline.dll' https://fars.ee/
    curl -F 'c=@./x32/libQt5Inline.dll.a' https://fars.ee/
fi

objdump -p ./$WINARCH/libQt5Inline.dll | grep -i "\.dll"
curl -F 'name=@/etc/issue' https://img.vim-cn.com/

