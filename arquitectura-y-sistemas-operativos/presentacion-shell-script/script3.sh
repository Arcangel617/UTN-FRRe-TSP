#!/bin/bash

# Crear un script llamado lsfecha al que le pasemos una fecha y nos 
# devuelva los archivos de ese directorio modificados en esa fecha.
# La tarea será realizada mediante una función que nos devuelva los archivos 
# del directorio actual cuya fecha de modificación sea la dada en un argumento.
#
# Recomendaciones: tener en cuenta los comandos ls y grep, además del 
# concepto de tuberías.

echo Listando directorio actual...
ls -alt | grep $1

