#!/bin/bash
#######################################################################################
# Escribir un ­script que realice un listado recursivo del directorio /etc, y almacene 
# la salida en un archivo miEtc.dir y guardar el archivo en un directorio que se haya
# ingresado previamente como argumento.
#######################################################################################

# Primero se pregunta si el script no recibió parámetros.
# En caso de que no haber parámetros creará el archivo de 
# salida en el directorio raiz de script.
# if [[ $# -ne 0 ]]; then
# 	dir_name=$(pwd)
# 	ls -R /etc >> $dir_name/miEtc.dir 
# else
# 	echo Not implemented yet.
# 	# if [[ -a $1 ]]; then
# 	# 	ls -R /etc >> 
# 	# else
# 	# 	echo El directorio no existe.
# 	# fi
# 	# ls -R /etc 
# fi
suma=$`($#)`+3
echo $suma

