#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}"  )" && pwd  )"
cd DIR

# install network drivers for my thinkpad-E440(wifi: rtl8723b3, eth: 8168)
sh install_rtl8723be.sh
sh install_r8168.sh

# install some requirements 
sh prepare.sh

# install zsh and ohmyzsh
sudo apt-get install -y zsh
sh -c "$(wget https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh -O -)"

# install tmux
sudo apt-get install -y tmux

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
sudo add-apt-repository ppa:webupd8team/sublime-text-2
sudo apt-get update
sudo apt-get install -y sublime-text

# install and configure vim
sudo apt-get install -y vim-gtk
cp ../vim/.vimrc ~/.vimrc
mkdir ~/.vim && cp ../vim/colors/ ~/.vim
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim



cd -
