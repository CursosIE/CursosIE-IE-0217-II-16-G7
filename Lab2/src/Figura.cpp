  /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Figura.cpp
 * Author: Pablo Alfaro
 *
 * Created on 6 de septiembre de 2016, 02:57 PM
 */

#include "Figura.h"
#include <iostream>
#include <math.h>

using namespace std;

Figura::Figura() {
}

Figura::Figura(string nombre, string color) {
    this->nombre = nombre;
    this->color = color;
}

Figura::~Figura() {
}


double Figura::area(){
    cout << "Calculo de area" << endl;
    return 0;
}

double Figura::perimetro(){
    cout << "Calculo de perimetro" << endl;
    return 0;
}

void Figura::operator~(){

}
void Figura::operator!(){

}
