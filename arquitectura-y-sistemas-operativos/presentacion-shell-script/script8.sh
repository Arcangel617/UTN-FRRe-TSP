#!/bin/bash

# Bucle while

a=42
while [ $a -le 53 ]
do
	echo Contador = $a
	a=`expr $a + 1`

done
