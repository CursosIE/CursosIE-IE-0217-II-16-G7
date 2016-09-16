/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Cuadrado.cpp
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:38 PM
 */

#include "Cuadrado.h"
#include <math.h>

Cuadrado::Cuadrado() {
}

Cuadrado::Cuadrado(string nombre, string color, double lado) {
  this->nombre = nombre;
  this->color = color;
  this->lado = lado;
}

Cuadrado::~Cuadrado() {
}

double Cuadrado::area(){
    cout << "Calculo de area del Cuadrado " + nombre  << endl;
    double area = lado * lado;
    return area;
}

double Cuadrado::perimetro(){
    cout << "Calculo de perimetro del Cuadrado " + nombre << endl;
    double perimetro = 4 * lado;
    return perimetro;
}

void Cuadrado::operator~(){
  cout << "Datos:" << endl;
  cout << "Nombre: " + nombre << endl;
  cout << "Color: " + color << endl;
  cout << "Lado : " << lado << endl;
}
void Cuadrado::operator!(){
  cout << area() << endl;
  cout << perimetro() <<endl;
}
