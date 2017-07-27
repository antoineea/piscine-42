#!/bin/sh
ips=`ifconfig | grep "inet " | tr -d "\t" | awk -F  " " '{print $2}'`

if [ -z "$ips" ]
then
	echo "Je suis perdu!"
else
	echo $ips | tr ' ' '\n'
fi
