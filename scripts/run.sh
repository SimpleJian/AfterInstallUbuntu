#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}"  )" && pwd  )"
cd $DIR

# install network drivers for my thinkpad-E440(wifi: rtl8723b3, eth: 8168)
# bash install_rtl8723be.sh
# bash install_r8168.sh

# wait to connect to network
echo "Press any key to continue if network are ready..."
read -n1 -t5 any_key

# install some requirements 
bash prepare.sh

# install python packages
sudo pip install pandas
sudo pip install numpy
sudo pip install scipy
sudo pip install sklearn
sudo apt-get install -y python-matplotlib
sudo pip install pyyaml
sudo pip install keras

# install JRE
sudo apt-get install -y default-jre default-jdk

# install sublime
sudo add-apt-repository -y ppa:webupd8team/sublime-text-2
sudo apt-get update
sudo apt-get install -y sublime-text

# install and configure vim
sudo apt-get install -y vim-gtk
cp ../vim/.vimrc ~/.vimrc
mkdir -p ~/.vim && cp -r ../vim/colors ~/.vim
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim

# install zsh and ohmyzsh
sudo apt-get install -y zsh
sh -c "$(wget https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh -O -)"

# install tmux
sudo apt-get install -y tmux

cd -
