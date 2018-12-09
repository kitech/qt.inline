#!/bin/sh



exit

###
MXEDIR=/opt/mxe2

# run on host
if [[ $ISINDK != "y" ]]; then
    cp -va $0 $MXEDIR/
    docker run -it -e ISINDK=y -v $MXEDIR:$MXEDIR ubuntu:16.04 $MXEDIR/dkmxeqt.sh
    exit
fi

# run in docker


apt-get update -qq
apt-get install -y git wget gcc g++ make libtool-bin libtool intltool automake \
        p7zip-full xz-utils autopoint bison bzip2 flex gperf libtool ruby scons unzip python \
        libffi-dev cmake libgdk-pixbuf2.0-dev

git clone git@github.com/mxe/mxe $MXEDIR

cd $MXEDIR

git checkout -b lockver
git reset --hard aaaaa
# 5.10.1 git:mxe:97c0fbf
# 5.9.3 git:mxe:60b66c7

#export http_proxy=
#export https_proxy=
make MXE_TARGETS=i686-w64-mingw32.shared cc cmake --jobs=1 JOBS=3
make MXE_TARGETS=i686-w64-mingw32.shared qtbase qttranslations qtmultimedia qtsvg qtdeclarative qtactiveqt qtwinextras qtquickcontrols2 --jobs=1 JOBS=3

echo "done sleeping..."
sleep 8888888


