#!/bin/bash

####################################################################################
# Escribir un script que muestre por salida estandar todos los directorios y       #
# subdirectorios recursivamente de un directorio ingresado por entrada estandar    #
# (no argumento), el script deberá verificar si el valor ingresado es precisamente #
# un directorio y existe.(Puede aceptar rutas relativas y absolutas)               #
####################################################################################

cat < data.txt
folder=$1
echo folder
# if [[ -d folder ]]; then
# 	ls -R folder
# fi