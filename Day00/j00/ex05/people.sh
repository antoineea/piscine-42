#!/bin/sh
ldapsearch -LLLQ "(sn=z*)" cn | grep cn | sort -rf | cut -c5-
