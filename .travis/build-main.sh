#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

env|grep TRAVIS| tee travis.env
echo "JOB=$JOB" >> travis.env
echo "WINARCH=$WINARCH" >> travis.env
echo "WITH_QT_STATIC=$WITH_QT_STATIC" >> travis.env

# for dockers
if [[ $JOB = "archlinux" ]] || [[ $JOB = "mingw" ]] || [[ $JOB = "ubuntu16" ]] || [[ $JOB = "ubuntu18" ]]; then
    dkname=$JOB
    dkfile=Dockerfile.gen
    if [[ $JOB = "ubuntu18" ]]; then
        echo "FROM ubuntu:18.04" > $dkfile
    elif [[ $JOB = "ubuntu16" ]]; then
        echo "FROM ubuntu:16.04" > $dkfile
    else
        echo "FROM archlinux/base" > $dkfile
    fi
    echo "ADD . /root/" >> $dkfile
    echo "ENTRYPOINT [\"/root/.travis/run-main.sh\"]" >> $dkfile
    cat $dkfile

    docker build -t $dkname.gen -f $dkfile .
    # docker build -t $dkname -f ./.travis/Dockerfile.$dkname .
    docker run -v $HOME/.ccache:/root/.ccache --env-file ./travis.env $dkname.gen $GOVER
else
    ./.travis/build-$JOB.sh
fi
