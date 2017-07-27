#!/bin/sh
touch donnie.txt
alias rm="echo \"SAVE DONNIE\""
chflags uchg donnie.txt
rm -rf donnie.txt
