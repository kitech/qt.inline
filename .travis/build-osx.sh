#!/bin/bash

# Fail out on error
set -e -o pipefail

brew upgrade cmake
brew install make
brew install qt5

export PATH="/usr/local/opt/qt/bin:$PATH"
qmake -v
ls
cmake .
gmake -v
gmake -j3
find . -name libQt5Inline.dylib
ls -lh libQt5Inline*

