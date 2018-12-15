
Qt5 C wrapper for FFI invoke original used in https://github.com/kitech/qt.go

So there is no C wrapper functions header source here.

[![Build Status](https://travis-ci.org/kitech/qt.inline.svg?branch=master)](https://travis-ci.org/kitech/qt.inline)
[![Sourcegraph](https://sourcegraph.com/github.com/kitech/qt.inline/-/badge.svg)](https://sourcegraph.com/github.com/kitech/qt.inline?badge)

### Requirement

* C++11 support compiler
* Qt 5.10-5.12

### Platforms

* Linux
* MacOS
* Windows7+
* Android
* \*BSD

### Installation

cmake flags:
* -DANDROID=on/off default: off
* -DUSE_WEBENGINES=on/off default: off
* -DMINGW_NOIPBIZ=on/off default: off
* -DMINGW_MXE=on/off default: off
* -DWITH_QT_STATIC=on/off default: off
* -DWINARCH=x32/x64 default: none

#### Linux/MacOS/\*BSD

    cmake /path/to/qt.inline

If Qt not installed in system dir like /usr, try:

    PATH=/path/to/qtdir/bin:$PATH cmake /path/to/qt.inline
    
#### Android

For currently android build on linux: 
* use hard code /opt/andndk16/ dir to find compiler
* use hard code /home/me/Qt5.10.1/5.10.1/android_armv7 dir to find qt for android dir

Setup these two dir, then build it like Linux. Do not forget add -DANDROID=on flag.

#### Windows cross build

coming soon...

But here is how do it: https://github.com/kitech/qt.inline/blob/master/run-mingw.sh

Cross build envirement: ArchLinux + martchus's ownstuff repo, https://martchus.no-ip.biz/

If you are not ArchLinux, maybe can try MXE cross build envirement.

#### Windows native build

coming soon...

Compilers: mingw64-gcc or tdm-gcc


