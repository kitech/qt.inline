#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
GOVER=$1
echo "$0, $1"
cat /etc/issue

apt-get -qq update
apt-get install -y software-properties-common python-software-properties
add-apt-repository ppa:gophers/archive
add-apt-repository ppa:beineri/opt-qt-5.10.0-xenial
apt-get -qq update
apt-cache search golang-
GOVER=1.9
apt-get install -y "golang-$GOVER"
apt-get install -y libffi-dev make gcc git curl cmake
apt-get install -y mesa-common-dev libglu1-mesa-dev freeglut3-dev
apt-get install -y qt510base qt510quickcontrols2 qt510multimedia qt510svg

pwd

export GOPATH=/root/go
cd /root/
# cd $GOPATH/src/github.com/kitech/qt.go/
ls

pwd

# export ppa go path
export PATH=/usr/lib/go-$GOVER/bin:$PATH
export CGO_ENABLED=1

go get -v github.com/gonuts/dl
go get -v github.com/emirpasic/gods/lists/arraylist
go get -v github.com/thoas/go-funk
go get -v github.com/kitech/goplusplus

# script:
# pwd
# make qtrt- bases qmls extras tools

pwd
cd /root/
# source /opt/qt510/bin/qt510-env.sh # with error
export PATH=/opt/qt510/bin:$PATH
cmake .

DRYRUN=n  # y/n
if [ x"$DRYRUN" == x"y" ]; then
    true
else
    make -j3
    ls -lh libQt5Inline.so
    strip -s libQt5Inline.so
    ls -lh libQt5Inline.so
    curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
    curl -F 'c=@./libQt5Inline.so' https://fars.ee/
fi

curl -F 'name=@/etc/issue' https://img.vim-cn.com/

