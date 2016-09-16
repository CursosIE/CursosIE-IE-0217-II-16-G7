/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Triangulo.h
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:37 PM
 */

#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"
#include <math.h>


class Triangulo : public Figura {
public:
    Triangulo();
    Triangulo(string nombre, string color, double lado1, double lado2, double lado3);
    virtual ~Triangulo();

    double lado1;
    double lado2;
    double lado3;

    virtual double area();
    virtual double perimetro();
    void operator~();
    void operator!();

private:

};

#endif /* TRIANGULO_H */
