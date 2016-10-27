#!/bin/bash

#####################################################################################
# Authors: Artigue Arcangel Andres <https://github.com/Arcangel617>                 #
#          Salinas Andres Sebastian                                                 #
#####################################################################################

#####################################################################################
# Escribir un script que busque de manera recursiva en el directorio /etc todos los #
# archivos con extensión .conf y los copie a un directorio pasado como argumento.   #
# Si el directorio pasado como argumento no existe, este deberá ser creado.         #
#####################################################################################

#####################################################################################
# Se verifica que el script reciba parametros.                                      #
#####################################################################################
if [[ $#<1 ]]; then
	echo "$0: Especifique un directorio."
else
	#################################################################################
	# Se verifica que el directorio que se pasa como parámetro exista.              #
	#################################################################################
	if [[ -d $1 ]]; then
		#############################################################################
		# Como se desconoce cuantos subdirectorios existen en /etc, se decide       #
		# limitar la búsqueda hasta 10 subdirectorios.                              #
		#############################################################################
		for i in $(find /etc -maxdepth 10 -type d); do
			echo "Copiando desde $i"
			cp $i/*.conf $1
		done
		echo "Finalizado!"
	else
		echo "El directorio no existe."
		echo "Creando el directorio..."
		mkdir $1
		#############################################################################
		# Se verifica que el directorio se haya creado                              #
		#############################################################################
		if [ $? -ne 0 ] ; then
		    echo "No se creo el directorio."
		else
			for i in $(find /etc -maxdepth 10 -type d); do
				echo "Copiando desde $i"
				cp $i/*.conf $1
			done
			echo "Finalizado!"
		fi
	fi
fi