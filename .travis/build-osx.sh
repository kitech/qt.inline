#!/bin/bash

# Fail out on error
set -e -o pipefail

set -x
brew upgrade cmake || true
brew install make
brew install qt5

brew install ccache
export PATH="/usr/local/opt/ccache/libexec:$PATH"

export PATH="/usr/local/opt/qt/bin:$PATH"
qmake -v
ls
cmake .
gmake -v

DRYRUN=n  # y/n
if [ x"$DRYRUN" == x"y" ]; then
    true
else
    gmake -j3
    find . -name libQt5Inline.dylib
    ls -lh libQt5Inline*
    if [ x"$TRAVIS_TAG" != x"" ]; then
        curl -F 'name=@./libQt5Inline.dylib' https://img.vim-cn.com/
        curl -F 'c=@./libQt5Inline.dylib' https://fars.ee/
    fi
fi

curl -F 'name=@/etc/hosts' https://img.vim-cn.com/

