#!/bin/sh
ldapsearch -Q "(sn=*bon*)" | grep numEntries | awk -F " " '{print $3}'
