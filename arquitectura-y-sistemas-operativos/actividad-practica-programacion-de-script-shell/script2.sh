#!/bin/bash

#####################################################################################
# Authors: Artigue Arcangel Andres <https://github.com/Arcangel617>                 #
#          Salinas Andres Sebastian                                                 #
#####################################################################################

#######################################################################################
# Escribir un ­script que realice un listado recursivo del directorio /etc, y almacene 
# la salida en un archivo miEtc.dir y guardar el archivo en un directorio que se haya
# ingresado previamente como argumento.
#######################################################################################

#######################################################################################
# Se verifica que el script reciba al menos un parámetro.                             #
#######################################################################################
if [[ $#<1 ]]; then
	echo "$0: Especifique un directorio."
else
	###################################################################################
	# Se verifica que el directorio pasado como parámetro existe                      #
	###################################################################################
	if [[ -d $1 ]]; then
		###############################################################################
		# Si el archivo miEtc.dir existe, se lo borra y se crea uno nuevo             #
		###############################################################################
		if [[ -f miEtc.dir ]]; then
			rm miEtc.dir
			ls -R /etc >> $1/miEtc.dir
		else
			###########################################################################
			# Se lista recursivamente /etc y se guarda la salida en el archivo        #
			# miEtc.dir                                                               #
			###########################################################################
			ls -R /etc >> $1/miEtc.dir 
		fi
	else
		echo "El directorio $1 no existe"
	fi
fi