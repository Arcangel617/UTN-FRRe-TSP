#!/bin/bash

# Bucle until

a=42
until [ $a -eq 54 ]
do
	echo Contador = $a
	a=`expr $a + 1`
done 
