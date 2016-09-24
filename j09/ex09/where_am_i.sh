#!/bin/sh

var=$(ifconfig -a | grep -i "inet " | cut -d' ' -f2)
if test -z "$var"
then
	echo "Je suis perdu!\n"
else
	echo $var | tr ' ' '\n'
fi
