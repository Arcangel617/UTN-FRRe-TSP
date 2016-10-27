#!/bin/bash

#####################################################################################
# Authors: Artigue Arcangel Andres <https://github.com/Arcangel617>                 #
#          Salinas Andres Sebastian                                                 #
#####################################################################################

#####################################################################################
# Escribir un script que muestre por salida estandar todos los directorios y        #
# subdirectorios recursivamente de un directorio ingresado por entrada estandar     #
# (no argumento), el script deberá verificar si el valor ingresado es precisamente  #
# un directorio y existe.(Puede aceptar rutas relativas y absolutas)                #
#####################################################################################

#####################################################################################
# Se verifica que el script reciba al menos un directorio                           #
#####################################################################################
if [[ $#<1 ]]; then
	echo "$0: Ingrese un directorio"
else
	#################################################################################
	# Se verifica que el directorio existe y se muestran los directorios y sub-     #
	# directorios.                                                                  #
	#################################################################################
	if [[ -d $1 ]]; then
		find $1 -maxdepth 20 -type d
	else
		echo "El directorio no existe"
	fi
fi