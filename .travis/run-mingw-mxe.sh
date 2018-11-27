#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
WINARCH=$1
WITH_QT_STATIC=$2
if [ x"$WINARCH" = x"x64" ]; then
    WINARCH="x86_64"
else
    WINARCH="i686"
fi
echo "$0, $1, $2"

echo "[ownstuff]" >> /etc/pacman.conf
echo "SigLevel = Optional TrustAll" >> /etc/pacman.conf
echo "Server = https://martchus.no-ip.biz/repo/arch/ownstuff/os/\$arch" >> /etc/pacman.conf

pacman -Suyy --noconfirm
#pacman -S --noconfirm cmake gcc clang base-devel
#pacman -S --noconfirm qt5-base qt5-quickcontrols2 qt5-x11extras qt5-imageformats qt5-graphicaleffects
pacman -S --noconfirm cmake base-devel ccache git
# pacman -S --noconfirm mingw-w64-cmake mingw-w64-gcc mingw-w64-qt5-base-static mingw-w64-qt5-quickcontrols2 mingw-w64-qt5-multimedia mingw-w64-qt5-svg

which objdump

pwd
mkdir -v cibuild

libtype="static"
if [ x"$WITH_QT_STATIC" == x"" ]; then
    WITH_QT_STATIC="off"
    libtype="shared"
fi

if [[ $QTVER = "v5.9" ]]; then
    git clone https://github.com/qtchina/qt59-mingw-${WINARCH}-${libtype}.git qtlib
else # master default
    git clone https://github.com/qtchina/qt510-mingw-${WINARCH}-${libtype}.git qtlib
fi
export PATH=$PWD/qtlib/bin:$PWD/qtlib/${WINARCH}-w64-mingw32.${libtype}/qt5/bin:$PATH
mkdir -p /opt/mxe
ln -sv $PWD/qtlib /opt/mxe/usr

### build x64_64/i686 version dll
cd cibuild
${WINARCH}-w64-mingw32.${libtype}-cmake -DCMAKE_BUILD_TYPE=Debug -DWINARCH=${WINARCH} -DMINGW_MXE=on -DMINGW_NOIPBIZ=off -DWITH_QT_STATIC="${WITH_QT_STATIC}" ..
# -DCMAKE_TOOLCHAIN_FILE=../tc-mingw.cmake ..
make -j3
cd ..

find -name "libQt5Inline.*"
ls -lh cibuild/libQt5Inline*

${WINARCH}-w64-mingw32.${libtype}-strip -s cibuild/libQt5Inline.dll
ls -lh cibuild/libQt5Inline*

if [ x"$TRAVIS_TAG" != x"" ]; then
    curl -F 'name=@./cibuild/libQt5Inline.dll' https://img.vim-cn.com/
    curl -F 'name=@./cibuild/libQt5Inline.dll.a' https://img.vim-cn.com/
    curl -F 'c=@./cibuild/libQt5Inline.dll' https://fars.ee/
    curl -F 'c=@./cibuild/libQt5Inline.dll.a' https://fars.ee/
fi

objdump -p ./cibuild/libQt5Inline.dll | grep -i "\.dll"
curl -F 'name=@/etc/issue' https://img.vim-cn.com/

