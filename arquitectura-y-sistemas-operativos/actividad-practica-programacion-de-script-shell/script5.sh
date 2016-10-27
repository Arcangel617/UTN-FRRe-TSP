#!/bin/bash

#####################################################################################
# Authors: Artigue Arcangel Andres <https://github.com/Arcangel617>                 #
#          Salinas Andres Sebastian                                                 #
#####################################################################################

#####################################################################################
# Ejecutar el siguiente comando: date +%Y%m%d y observar el resultado. Transformar  #
# el ejercicio anterior en una función para copiar todos los archivos con extensión #
# .conf del directorio actual al directorio backupConf/fecha, siendo fecha el valor #
# del comando anteriormente ejecutado.                                              #
#####################################################################################

#####################################################################################
# Al ejecutar el comando "date +%Y%m%d" se obtiene una salida formateada de la      #
# fecha lo cual difiere con la salida que se obtiene al ejecutar el comando "date"  #
# sin pasarle parámetros.                                                           #
#                                                                                   #
# date +%Y%m%d --> 20161026                                                         #
# date         --> mié oct 26 18:24:05 ART 2016                                     #
#####################################################################################

#####################################################################################
# NOTA: Se asume que el directorio actual hace referencia al directorio donde se    #
# encuentra el script al momento de la ejecución.                                   #
#####################################################################################

function copiar {
	##############################################################################
	# Como se solicita el directorio actual, solo se buscará en dicho directorio #
	##############################################################################
	for i in $(find . -maxdepth 0 -type d); do
		echo "Copiando desde $i"
		cp $i/*.ejem $(pwd)/backupConf/$(date +%Y%m%d)
	done
	echo "Finalizado!"
}

#####################################################################################
# Se crean los directorios que se necesitan para realizar el backup:                #
#####################################################################################
mkdir $(pwd)/backupConf
if [[ $? -ne 0 ]]; then
	echo "No se creó el directorio"
else
	#################################################################################
	# Se crea un directorio con la fecha actual                                     #
	#################################################################################
	mkdir $(pwd)/backupConf/$(date +%Y%m%d)
	if [[ $? -ne 0 ]]; then
		echo "No se creó el directorio"
	fi
	#################################################################################
	# Se llama a la función                                                         #
	#################################################################################
	copiar
fi