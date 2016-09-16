#!/usr/bin/python
# -*- coding: utf -8 -*-
import sys

##@package Suma en Python
#Programa Suma hecho en Python por Carlos Jimenez y Pablo Alfaro


##Estas son las variables que guardan lo que
#lo que se ingresa en la consola y la variable que suma los datos.
#Son 4 variables


# @param num1

num1 = float(sys.argv[1])

# @param num2
num2 = float(sys.argv[2])

# @param num3
num3 = float(sys.argv[3])

# @param resultado guarda el valor de la suma.
resultado = float(num1 + num2 + num3)

##Con print podemos imprimir resultado
print resultado

