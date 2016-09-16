/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Pablo Alfaro
 *
 * Created on 6 de septiembre de 2016, 08:52 PM
 */

#include <cstdlib>
#include "Figura.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <math.h>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

  Triangulo t("Triangulus Lothbrock","rojo",3,4,6);
  Cuadrado c("Cuadradini Barbieri","verde",5);
  Circulo o("Circulitus Voltskaya","azul",7);

  ~t;
  !t;
  ~c;
  !c;
  ~o;
  !o;




    return 0;
}
