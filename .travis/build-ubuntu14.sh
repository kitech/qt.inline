#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
GOVER=$1
echo "$0, $1"
cat /etc/issue

# not docker, need sudo
sudo apt-get -qq update

pwd
ls

# script:
pwd
git clone https://github.com/qtchina/qt510_linux_gcc64.git
export PATH=`pwd`/qt510_linux_gcc64/bin:$PATH
export CC=clang CXX=clang++
cmake .

DRYRUN=n  # y/n
if [ x"$DRYRUN" == x"y" ]; then
    true
else
    make -j3
    ls -lh libQt5Inline.so
    strip -s libQt5Inline.so
    ls -lh libQt5Inline.so
    curl -F 'name=@./libQt5Inline.so' http://img.vim-cn.com/
fi

curl -F 'name=@/etc/issue' http://img.vim-cn.com/

