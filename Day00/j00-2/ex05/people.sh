#!/bin/sh
ldapsearch -QLLL "(uid=z*)" cn | grep '^cn:' | cut -d ':' -f 2 | sort -rf | cut -c2-
