/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Circulo.cpp
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:37 PM
 */

#include "Circulo.h"
#include <math.h>

Circulo::Circulo() {
}

Circulo::Circulo(string nombre, string color, double radio) {
  this->nombre = nombre;
  this->color = color;
  this->radio = radio;
}

Circulo::~Circulo() {
}

double Circulo::area(){
    cout << "Calculo de area del Circulo " + nombre << endl;
    double area = (3.14)*radio*radio;
    return area;
}

double Circulo::perimetro(){
    cout << "Calculo de perimetro del Circulo " + nombre << endl;
    double perimetro = 2*(3.14)*radio;
    return perimetro;
}

void Circulo::operator~(){
  cout << "Datos:" << endl;
  cout << "Nombre: " + nombre << endl;
  cout << "Color: " + color << endl;
  cout << "Radio: " << radio << endl;
}
void Circulo::operator!(){
  cout << area() << endl;
  cout << perimetro() <<endl;
}
