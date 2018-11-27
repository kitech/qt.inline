#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

set -x
cat /etc/issue
cat /etc/os-release

source /root/.qtenvs
env

cd /root/
ls && ls src/

if [[ $JOB = "archlinux" ]] || [[ $JOB = "ubuntu16" ]]; then
    ./.travis/run-arch-ubuntu16.sh
else # mingw
    ./.travis/run-$JOB-mxe.sh "$WINARCH" "$WITH_QT_STATIC"
    # ./.travis/run-$JOB-noipbiz.sh "$WINARCH" "$WITH_QT_STATIC"
fi

