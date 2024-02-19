alias norm='norminette -R CheckForbiddenSourceHeader'
alias ccw='cc -Wall -Wextra -Werror'
alias c_formatter_42='python3 /Users/sishige/Library/Python/3.9/bin/c_formatter_42'
ccx() { cc -Wall -Wextra -Werror "$1" && ./a.out; }
USER=sishige
export USER
MAIL=$USER@student.42tokyo.jp
export MAIL
alias findx="find . -type f ! -path './.git/*' ! -name '.*'"
alias v='vim'
alias c='cat'
alias cb='(){cat $1 | pbcopy}'
alias g='git'
alias gc='(){git commit -m "$1 $2"}'
alias gp='git push'
alias ga='git add'
alias gaa='git add .'
alias gs='git status'
alias gsa='git status -uall'
alias gl='git log'
alias vz='vi ~/.zshrc'
alias sz='source ~/.zshrc'
alias vv='vi ~/.vimrc'
function chpwd() { ls }
