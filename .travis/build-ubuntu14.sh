#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
GOVER=$1
echo "$0, $1"
cat /etc/issue
cat /etc/os-release

# not docker, need sudo
# clang 6.0
sudo sh -c "echo 'deb http://apt.llvm.org/trusty/ llvm-toolchain-trusty-6.0 main' >> /etc/apt/sources.list"
sudo sh -c "echo 'deb-src http://apt.llvm.org/trusty/ llvm-toolchain-trusty-6.0 main' >> /etc/apt/sources.list"
wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key|sudo apt-key add -
tail /etc/apt/sources.list
sudo apt-get -qq update
apt-cache search clang

sudo apt-get -qq update
sudo apt-get install -y libx11-dev libxcb-icccm4-dev libxcb-image0-dev libxcb-keysyms1-dev libxcb-present-dev libxcb-present-dev libxcb-shm0-dev libxcb-sync-dev libxcb-xfixes0-dev libxcb-xkb-dev libxcb-cursor-dev libxcb-xinerama0-dev libice-dev
sudo apt-get install -y software-properties-common python-software-properties
sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
sudo apt-get -qq update
sudo apt-get install -y clang-6.0

source ./.qtenvs
env
pwd
ls

# script:
pwd
if [[ $QTVER = "v5.9" ]] || [[ $QTVER = "v5.10" ]]; then
    export CC=clang CXX=clang++
else
    cd /usr/bin/ && sudo ln -sv clang++-6.0 clang++ && cd -
    cd /usr/bin/ && sudo ln -sv clang-6.0 clang && cd -
    export CC=clang-6.0 CXX=clang++-6.0
fi

if [ x"$WITH_QT_STATIC" == x"" ]; then
    WITH_QT_STATIC=off
fi

qtverdir=$(echo "$QTVER"|sed 's/v//'|sed 's/\.//')  # v5.10 => 510
if [ x"$WITH_QT_STATIC" == x"on" ]; then
    if [[ $QTVER = "v5.9" ]] || [[ $QTVER = "v5.10" ]]; then
        git clone https://github.com/qtchina/qtlib510_linux_x64_static.git
        sudo cp -a qtlib510_linux_x64_static /opt/qt510st
        export PATH=/opt/qt510st/bin:$PATH
    else # master
        git clone https://github.com/qtchina/qtlib512_linux_x64_static.git
        sudo cp -a qtlib512_linux_x64_static /opt/qt512st
        export PATH=/opt/qt512st/bin:$PATH
    fi
else
    git clone https://github.com/qtchina/qt${qtverdir}_linux_gcc64.git
    export PATH=`pwd`/qt${qtverdir}_linux_gcc64/bin:$PATH
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

