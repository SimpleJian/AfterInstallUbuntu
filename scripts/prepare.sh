#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}"  )" && pwd  )"
cd $DIR

# change the sources.list
sudo mv /etc/apt/sources.list /etc/apt/sources.list.bak
sudo cp ../sources.list/tsinghua6.sources.list /etc/apt/sources.list

# install some requirement
sudo apt-get update
sudo apt-get install -y build-essential git libatlas-base-dev libopencv-dev
sudo apt-get install -y python-dev python-pip gfortran libopenblas-dev liblapack-dev
sudo apt-get install -y automake libevent-dev
sudo apt-get install -y libncurses-dev

cd -

