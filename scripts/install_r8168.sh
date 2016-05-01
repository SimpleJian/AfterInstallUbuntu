#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}"  )" && pwd  )"
cd $DIR/../drivers/r8168

sudo sh autorun.sh

cd -
