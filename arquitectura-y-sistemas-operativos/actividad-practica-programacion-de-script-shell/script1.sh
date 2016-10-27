#!/bin/bash

################################################################################
# Authors: Artigue Arcangel Andres <https://github.com/Arcangel617>            #
#          Salinas Andres Sebastian                                            #
################################################################################

################################################################################
# Escribir un script que verifique cada 15 segundos si existe en el directorio #
# actual un archivo "prueba.txt". Mientras no exista el archivo deberá mostrar #
# por salida estandar el mensaje "archivo no encontrado", Si el archivo existe #
# deberá mostrar su contenido y finalizar la ejecución del script.             #
################################################################################

################################################################################
# Se define un contador que nos servirá para saber cuantas veces se ejecutó el #
# bucle while.                                                                 #
################################################################################
times=0
################################################################################
# 
################################################################################

while [[ true ]]; do
	############################################################################
	# Se verifica si el archivo prueba.txt existe                              #
	############################################################################
	if [[ -f prueba.txt ]]; then
		echo "Archivo encontrado!"
		echo ""
		echo "prueba.txt:"
		cat prueba.txt
		echo ""
		echo "Ejecución finalizada."
		break
	else
		echo archivo no encontrado
		times=$times+1
	fi
	############################################################################
	# Cuando el script se haya ejecutado dos veces, se creará un archivo lla-  #
	# mado prueba.txt con un contenido para que en la siguiente iteración se   #
	# encuentre el archivo y finalice el script.                               #
	############################################################################
	if [[ $times -eq 2 ]]; then
		touch prueba.txt
		echo "Este archivo fue creado automáticamente por el script" >> prueba.txt
	fi
	############################################################################
	# Se deja dormir la ejecución del script durante 15 segundos               #
	############################################################################
	sleep 15
done

