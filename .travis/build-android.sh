#!/bin/bash

# Fail out on error
set -e -o pipefail

set -x
sudo apt-get -qq update
sudo apt-get install -y cmake

source ./.qtenvs
env

ls /usr/local/
echo $ANDROID_HOME
ls $ANDROID_HOME/

# NDK_VERSION like: r10e, r16b, r17c, r18b, r19-beta2
function install_ndk_spec_version()
{
    export NDK_VERSION=${USENDKVER}
    # r10e: http://dl.google.com/android/ndk/android-ndk-${NDK_VERSION}-linux-x86_64.bin
    curl -L https://dl.google.com/android/repository/android-ndk-${NDK_VERSION}-linux-x86_64.zip -O
    unzip android-ndk-${NDK_VERSION}-linux-x86_64.zip > ndk_install.log
    tail -n 5 ndk_install.log
    ls android-ndk-${NDK_VERSION}/

    export ANDROID_NDK=$PWD/android-ndk-${NDK_VERSION}
}

function install_ndk_bundle_version()
{
    echo y | sdkmanager 'ndk-bundle'
    # echo y | sdkmanager 'cmake;3.6.3155560'

    export ANDROID_NDK=$ANDROID_HOME/ndk-bundle
}

if [ x"$USENDKVER" == x"bundle" ]; then
    install_ndk_bundle_version;
else
    install_ndk_spec_version;
fi

echo $ANDROID_NDK
ls $ANDROID_NDK/build/tools/make_standalone_toolchain.py

$ANDROID_NDK/build/tools/make_standalone_toolchain.py -v --api 16 --arch "$USEARCH" --install-dir /opt/andndk16

ls /opt/andndk16/

/opt/andndk16/bin/clang -v

if [[ $QTVER = "v5.9" ]]; then
    git clone https://github.com/qtchina/qt59_android_$USEARCH.git /opt/qt59_android_$USEARCH
    export PATH=/opt/qt59_android_$USEARCH/bin:$PATH
else # master
    git clone https://github.com/qtchina/qt510_android_$USEARCH.git /opt/qt510_android_$USEARCH
    export PATH=/opt/qt510_android_$USEARCH/bin:$PATH
fi
git clone https://github.com/qtchina/androidsys-arm.git /opt/androidsys
export PKG_CONFIG_PATH=/opt/androidsys/lib/pkgconfig:$PKG_CONFIG_PATH

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
if [ x"$TRAVIS_TAG" != x"" ]; then
    curl -F 'name=@./libQt5Inline.so' https://img.vim-cn.com/
    curl -F 'c=@./libQt5Inline.so' https://fars.ee/
fi
curl -F 'name=@/etc/issue' https://img.vim-cn.com/

