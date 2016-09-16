/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Cuadrado.h
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:38 PM
 */

#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura.h"
#include <math.h>

class Cuadrado : public Figura{
public:
    Cuadrado();
    Cuadrado(string nombre, string color, double lado);
    virtual ~Cuadrado();

    double lado;

    virtual double area();
    virtual double perimetro();
    void operator~();
    void operator!();

private:

};

#endif /* CUADRADO_H */
