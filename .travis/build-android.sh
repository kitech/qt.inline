#!/bin/bash

# Fail out on error
set -e -o pipefail

set -x
sudo apt-get -qq update
sudo apt-get install -y cmake

ls /usr/local/
echo $ANDROID_HOME
ls $ANDROID_HOME/

echo y | sdkmanager 'ndk-bundle'
# echo y | sdkmanager 'cmake;3.6.3155560'

export ANDROID_NDK=$ANDROID_HOME/ndk-bundle
echo $ANDROID_NDK
ls $ANDROID_NDK/build/tools/make_standalone_toolchain.py

$ANDROID_NDK/build/tools/make_standalone_toolchain.py -v --api 16 --arch arm --install-dir /opt/andndk16

ls /opt/andndk16/

/opt/andndk16/bin/clang -v

git clone https://github.com/kitech/qt510_android_armv7.git
export PATH=qt510_android_armv7/bin:$PATH

pwd
cmake -DANDROID=on .
set +x
make -j3
ls -lh libQt5Inline.so

