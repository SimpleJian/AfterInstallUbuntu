""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
"                              .vimrc settings                               "
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" using vundle to manage plugins
set nocompatible              " be iMproved, required
filetype off                  " required
set rtp+=~/.vim/bundle/Vundle.vim/
call vundle#begin('~/.vim/bundle/')

Plugin 'VundleVim/Vundle.vim'
Plugin 'scrooloose/nerdtree'
Plugin 'ctrlpvim/ctrlp.vim'
Plugin 'davidhalter/jedi-vim'
Plugin 'jiangmiao/auto-pairs'
Plugin 'tomtom/tcomment_vim'
Plugin 'powerline/powerline'

" Plugin 'klen/python-mode'
" Plugin 'SirVer/ultisnips'
" Plugin 'honza/vim-snippets'
" Plugin 'scrooloose/syntastic'
" Plugin 'Raimondi/delimitMate'
" Plugin 'Valloric/YouCompleteMe'
" Plugin 'jalvesaq/Nvim-R'
" Plugin 'jcfaria/Vim-R-plugin'
" Plugin 'vim-scripts/taglist.vim'

call vundle#end()            " required
filetype plugin indent on    " required

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" make YCM compatible with UltiSnips (using supertab)
" let g:ycm_key_list_select_completion = ['<C-n>', '<Down>']
" let g:ycm_key_list_previous_completion = ['<C-p>', '<Up>']
" let g:SuperTabDefaultCompletionType = '<C-n>'
" 
" let g:ycm_server_keep_logfiles = 1
" let g:ycm_server_log_level = 'debug'
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" better key bindings for UltiSnipsExpandTrigger
" let g:UltiSnipsExpandTrigger = "<tab>"
" let g:UltiSnipsJumpForwardTrigger = "<tab>"
" let g:UltiSnipsJumpBackwardTrigger = "<s-tab>"
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" settings for NERDTree
" open NERDTree automatically when vim start up
" autocmd vimenter * NERDTree

" set NERDTree size
" let NERDTreeWinSize = 5

" open NERDTree automatically when vim strat up with no files
" autocmd StdinReadPre * let s:std_in=1
" autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif

" set the directory arrows in NERDTree
let g:NERDTreeDirArrowExpandable = '>'
let g:NERDTreeDirArrowCollapsible = 'v'

map <C-n> :NERDTreeToggle<cr>
" close vim when if the only window left open is NERDTree
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" disable beep and flash
set noerrorbells visualbell t_vb=
autocmd GUIEnter * set visualbell t_vb=
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" Recommended settings for syntastic
" set statusline+=%#warningmsg#
" set statusline+=%{SyntasticStatuslineFlag()}
" set statusline+=%*
" 
" let g:syntastic_always_populate_loc_list = 1
" let g:syntastic_auto_loc_list = 1
" let g:syntastic_check_on_open = 1
" let g:syntastic_check_on_wq = 0
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" YCM configurations
" let g:ycm_global_ycm_extra_conf = '~/vimfiles/bundle/YouCompleteMe/third_party/ycmd/cpp/ycm/.ycm_extra_conf.py'
" let g:ycm_confirm_extra_conf = 0
" let g:ycm_seed_identifiers_with_syntax = 1

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
set nu
set backspace=2
set nowrap


" set language to english
set langmenu=en_US
let $LANG = 'en_US'
source $VIMRUNTIME/delmenu.vim
source $VIMRUNTIME/menu.vim

set clipboard+=unnamed,unnamedplus,autoselect
set mouse=a

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" colorscheme
syntax enable
" colorscheme monokai
" colorscheme corporation
colorscheme jellybeans
" colorscheme BusyBee
" colorscheme desert
" colorscheme murphy
" colorscheme ron
" colorscheme zellner
" colorscheme evening
" colorscheme pablo
" colorscheme koehler
set background=dark
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

" set lines=38 columns=128
set guioptions-=m
set guioptions-=T
set guioptions-=r
set guioptions-=L


imap jj <ESC>
imap kk <ESC>

" set wildmode=longest,list,full
" set wildmenu
" Wildmenu
if has("wildmenu")
	set wildignore+=*.a,*.o
	set wildignore+=*.bmp,*.gif,*.ico,*.jpg,*.png,*.tiff
	set wildignore+=*.DS_Store,*.git,*.hg,*.svn
	set wildignore+=*~,*.swp,*.tmp
	set wildmenu
	set wildmode=longest,list
endif
set isfname-==


autocmd BufRead *.py nnoremap <buffer> <F9> :wa<CR> :exec '!python' shellescape(@%, 1)<cr>
" autocmd BufRead *.sh nnoremap <buffer> <F9> :wa<CR> :exec '!sh' shellescape(@%, 1)<cr>
" autocmd BufRead *.jl nnoremap <buffer> <F9> :wa<CR> :exec '!julia' shellescape(@%, 1)<cr>
" autocmd BufRead *.cpp nnoremap <buffer> <F9> :wa<CR> :!g++ % -o test && test <CR>
" autocmd BufRead *.c nnoremap <buffer> <F9> :wa<CR> :!gcc % -o %< && ./%< && rm %< <CR>
" autocmd BufRead *.java nnoremap <buffer> <F9> :wa<CR> :!javac % && java %< <CR>
" autocmd BufRead *.scala nnoremap <buffer> <F9> :wa<CR> :!scalac % <CR>:!scala %< <CR>


autocmd! bufwritepost _vimrc source %

let mapleader = ","
nnoremap <leader>n :tabprevious<CR>
nnoremap <leader>m :tabnext<CR>
nnoremap <leader>h <C-w>h
nnoremap <leader>j <C-w>j
nnoremap <leader>k <C-w>k
nnoremap <leader>l <C-w>l
nnoremap <leader>ev <C-w><C-v><C-l>:e $MYVIMRC<cr>
nnoremap <leader>= ggvG=

nmap <C-h> <leader>n
nmap <C-l> <leader>m

vnoremap <leader>s :sort<CR>
vnoremap < <gv
vnoremap > >gv


""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
set guifont=Consolas:h14:cANSI

" configure expanding of tabs for various file types
au BufRead,BufNewFile *.py set expandtab
au BufRead,BufNewFile *.c set noexpandtab
au BufRead,BufNewFile *.h set noexpandtab
au BufRead,BufNewFile Makefile* set noexpandtab

" --------------------------------------------------------------------------------
" configure editor with tabs and nice stuff...
" --------------------------------------------------------------------------------
set expandtab           " enter spaces when tab is pressed
set textwidth=120       " break lines when line length increases
set tabstop=4           " use 4 spaces to represent tab
set softtabstop=4
set shiftwidth=4        " number of spaces to use for auto indent
set autoindent          " copy indent from current line when starting a new line

" set smartindent
" set smarttab
" set hlsearch


" make backspaces more powerfull
set backspace=indent,eol,start

set ruler               " show line and column number
syntax on   			" syntax highlighting
set showcmd 			" show (partial) command in status line

set pastetoggle=<F2>

function! InsertTabWrapper()
    let col = col('.') - 1
    if !col || getline('.')[col - 1] !~ '\k'
        return "\<tab>"
    else
        return "\<c-n>"
    endif
endfunction
inoremap <tab> <c-r>=InsertTabWrapper()<cr>
" inoremap <tab> <c-n>
" inoremap <Tab> <C-X><C-F>

