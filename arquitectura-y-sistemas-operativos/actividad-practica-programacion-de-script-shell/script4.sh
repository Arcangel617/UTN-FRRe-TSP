#!/bin/bash

#####################################################################################
# Escribir un script que busque de manera recursiva en el directorio /etc todos los #
# archivos con extensión .conf y los copie a un directorio pasado como argumento.   #
# Si el directorio pasado como argumento no existe, este deberá ser creado.         #
#####################################################################################

if [[ -d $1 ]]; then
	ls $1
else
	echo "El directorio no existe."
	mkdir $1
	cp /etc/*.conf $1
fi