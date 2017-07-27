#!/bin/sh
touch -A -000001 bomb.txt
stat -r  bomb.txt | awk -F " " '{print $9}'
