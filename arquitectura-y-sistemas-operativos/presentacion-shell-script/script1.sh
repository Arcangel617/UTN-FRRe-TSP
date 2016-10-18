#!/bin/bash

# Crear un Script de Shell Básico llamado  script.inic utilizando un editor 
# de texto, al ejecutarse, el script debe hacer lo sgte:
#
# cd /tmp         -> Cambiar al directorio /tmp
# ls -al          -> Para mostrar el directorio
# ls -al | wc -l  -> Muestra Nro de lineas
#
# Luego para ejecutarlo:
# $ chmod 755 script.inic
# $./script.inic

# Se cambia al directorio /tmp
cd /tmp

# Se muestra el contenido del directorio
ls -al

# Se muestra el numero de lineas
ls -al | wc -l

# Por una cuestion de orden opto por cambiar el nombre del archivo a script1.sh
