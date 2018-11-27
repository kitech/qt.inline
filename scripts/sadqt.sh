#!/bin/sh

set -e

qvs="510 59"
for qv in $qvs; do
    if [ $qv = "59" ]; then
        git reset --hard 60b66c7
    else
        git reset --hard 97c0fbf
    fi

    qarchs="x86_64 i686"
    for qarch in $qarchs; do
        qlibtys="shared static"
        for qlibty in $qlibtys; do
            dstdir="qt$qv-mingw-$qarch-$qlibty"
            mxetarget="$qarch-w64-mingw32.$qlibty"
            echo "Building $dstdir with $mxetarget..."
            # sleep 3;
            if [ -f "$dstdir.ok" ]; then
                echo "Already built. $dstdir"
                continue
            fi

            rm -rf log/*
            rm -rf usr
            # http_proxy=10.0.0.32:8113 https_proxy=10.0.0.32:8113
            make MXE_TARGETS=$mxetarget qtbase qttranslations qtmultimedia qtsvg qtdeclarative qtquickcontrols2 qtwinextras --jobs=1 JOBS=2

            ### finish
            mv -v usr $dstdir
            touch $dstdir.ok
            rm -rf log/*
        done
    done
done
