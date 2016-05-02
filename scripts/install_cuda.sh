#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}"  )" && pwd  )"
cd $DIR/../cuda7.5/


# make sure the X has been turned off and continue
echo "Make sure the X has been turned off and press any key to continue..."
read -n1 -t5 any_key

sudo dpkg -i cuda-repo-ubuntu1404_7.5-18_amd64.deb
sudo apt-get update
sudo apt-get install cuda

cd -
