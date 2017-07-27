#!/bin/sh

## add_chelou

# Parse the first number, from base ’\"?! to base 5
nb1=$FT_NBR1
for (( i=0; i<${#nb1}; i++ )); do
	digit=${nb1:$i:1}

	if [ "$digit" == "'" ]; then
		b5n1="${b5n1}0"
	fi
	
	if [ "$digit" == "\\" ]; then
                b5n1="${b5n1}1"
        fi

	if [ "$digit" == "\"" ]; then
                b5n1="${b5n1}2"
        fi

	if [ "$digit" == "?" ]; then
                b5n1="${b5n1}3"
        fi

	if [ "$digit" == "!" ]; then
                b5n1="${b5n1}4"
        fi
done

# Convert the base5 number to a base 10 number 
b10n1=`echo "obase=10; ibase=5; $b5n1" | bc`

# Parse the second number, from base mrdoc to base 5
nb2=$FT_NBR2

for (( i=0; i<${#nb2}; i++ )); do
        digit=${nb2:$i:1}

        if [ "$digit" == "m" ]; then
                b5n2="${b5n2}0"
        fi

        if [ "$digit" == "r" ]; then
                b5n2="${b5n2}1"
        fi

        if [ "$digit" == "d" ]; then
                b5n2="${b5n2}2"
        fi

        if [ "$digit" == "o" ]; then
                b5n2="${b5n2}3"
        fi

        if [ "$digit" == "c" ]; then
                b5n2="${b5n2}4"
        fi
done

# Calculations
b10n2=`echo "obase=10; ibase=5; $b5n2" | bc`
base10sum=`bc <<<"$t1 + $t2"`

# Convert the sum to base 13 (bc gtaio luSnemf is 13 letters long)
base13sum=`echo "obase=13; ibase=10; $base10sum" | bc`
# Base 13 to gtaio luSnemf
for (( i=0; i<${#base13sum}; i++ )); do
        digit=${base13sum:$i:1}

        if [ "$digit" == "0" ]; then
                finalNumber="${finalNumber}g"
        fi

	if [ "$digit" == "1" ]; then
                finalNumber="${finalNumber}t"
        fi
	
	if [ "$digit" == "2" ]; then
                finalNumber="${finalNumber}a"
        fi

	if [ "$digit" == "3" ]; then
                finalNumber="${finalNumber}i"
        fi

	if [ "$digit" == "4" ]; then
                finalNumber="${finalNumber}o"
        fi

	if [ "$digit" == "5" ]; then
                finalNumber="${finalNumber} "
        fi

	if [ "$digit" == "6" ]; then
                finalNumber="${finalNumber}l"
        fi

	if [ "$digit" == "7" ]; then
                finalNumber="${finalNumber}u"
        fi

	if [ "$digit" == "8" ]; then
                finalNumber="${finalNumber}S"
        fi

	if [ "$digit" == "9" ]; then
                finalNumber="${finalNumber}n"
        fi

	if [ "$digit" == "A" ]; then
                finalNumber="${finalNumber}e"
        fi

	if [ "$digit" == "B" ]; then
                finalNumber="${finalNumber}m"
        fi
	
	if [ "$digit" == "C" ]; then
                finalNumber="${finalNumber}f"
        fi
done

echo $finalNumber
