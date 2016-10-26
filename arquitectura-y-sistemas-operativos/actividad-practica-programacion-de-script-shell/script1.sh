#!/bin/bash

################################################################################
# Escribir un script que verifique cada 15 segundos si existe en el directorio #
# actual un archivo "prueba.txt". Mientras no exista el archivo deberá mostrar #
# por salida estandar el mensaje "archivo no encontrado", Si el archivo existe #
# deberá mostrar su contenido y finalizar la ejecución del script.             #
################################################################################

times=0

while [[ true ]]; do
	if [[ -a prueba.txt ]]; then
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
	if [[ $times -eq 2 ]]; then
		touch prueba.txt
		echo "Este archivo fue creado automáticamente por el script" >> prueba.txt
	fi
	sleep 15
done

