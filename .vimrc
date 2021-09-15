set nocompatible

set smartcase
set nostartofline

filetype on
syntax on
set autoindent
set smartindent
set smarttab
set showmatch

set wildmenu

filetype indent plugin on

set shiftwidth=4
set softtabstop=4
set scrolloff=1
set expandtab

set number
set colorcolumn=80
set clipboard=autoselect

map <C-Down> :tabnew <CR>
map <C-Up> :tabedit
nmap <C-Right> :tabnext <CR>
nmap <C-Left> :tabprevious <CR>
highlight ColorColumn ctermbg=LightMagenta

set incsearch

autocmd BufWritePre *.[ch] :%s/\s\+$//e


" Auto load / install plugin manager

if !1 | finish | endif

" auto-install vim-plug
if empty(glob('~/.vim/autoload/plug.vim'))
    echo "Installing VimPlug..."
    silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    autocmd VimEnter * PlugInstall
endif

" VimPlug 
call plug#begin('~/.vim/plugged')


" VIMPROC 
Plug 'Shougo/vimproc', { 'do': 'make' }

" Syntastic  
" https://github.com/scrooloose/syntastic
Plug 'scrooloose/syntastic'

" Fugitive
" fugitive.vim: a Git wrapper so awesome, it should be illegal
" https://github.com/tpope/vim-fugitive
Plug 'tpope/vim-fugitive'

" Surround
" surround.vim: quoting/parenthesizing made simple
" https://github.com/tpope/vim-surround
Plug 'tpope/vim-surround'

Plug 'dylanaraps/wal.vim'


call plug#end()
" Required:
filetype plugin indent on

colorscheme wal
let g:syntastic_python_checkers = ['py']
