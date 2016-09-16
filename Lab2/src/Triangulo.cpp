/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Triangulo.cpp
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:37 PM
 */

#include "Triangulo.h"
#include <math.h>


Triangulo::Triangulo() {
}

Triangulo::Triangulo(string nombre, string color, double lado1, double lado2, double lado3) {
  this->nombre = nombre;
  this->color = color;
  this->lado1 = lado1;
  this->lado2 = lado2;
  this->lado3 = lado3;
}

Triangulo::~Triangulo() {
}

double Triangulo::area(){
    cout << "Calculo de area del Triangulo " + nombre << endl;
    double s = (lado1 + lado2 + lado3)/2;
    double area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
    return area;
}

double Triangulo::perimetro(){
    cout << "Calculo de perimetro del Triangulo " + nombre << endl;
    double perimetro = lado1 + lado2 + lado3;
    return perimetro;
}

void Triangulo::operator~(){
    cout << "Datos:" << endl;
    cout << "Nombre: " + nombre << endl;
    cout << "Color: " + color << endl;
    cout << "Lado 1: " << lado1 << endl;
    cout << "Lado 2: " << lado2 << endl;
    cout << "Lado 3: " << lado3 << endl;
}
void Triangulo::operator!(){
  cout << area() << endl;
  cout << perimetro() <<endl;
}
