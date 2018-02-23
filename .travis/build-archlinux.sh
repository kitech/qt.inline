#!/bin/bash

# stop as soon as one of steps will fail
set -e -o pipefail

docker build -t archqt -f Dockerfile.archlinux .

ls
docker run archqt

