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

$ANDROID_NDK/build/tools/make_standalone_toolchain.py -v --api 16 --arch "$USEARCH" --install-dir /opt/andndk16

ls /opt/andndk16/

/opt/andndk16/bin/clang -v

git clone https://github.com/qtchina/qt510_android_$USEARCH.git
export PATH=qt510_android_$USEARCH/bin:$PATH

pwd
cmake -DANDROID=on .
make -j3
ls -lh libQt5Inline.so
STRIP=/opt/andndk16/bin/$USEARCH-linux-androideabi-strip
if [ x"$USEARCH" == x"x86" ]; then
    STRIP=/opt/andndk16/bin/i686-linux-android-strip
fi
$STRIP -s libQt5Inline.so
ls -lh libQt5Inline.so
curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
curl -F 'c=@./libQt5Inline.so' https://fars.ee/
curl -F 'name=@/etc/issue' https://img.vim-cn.com/

