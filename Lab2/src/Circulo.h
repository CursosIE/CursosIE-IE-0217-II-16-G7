/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Circulo.h
 * Author: Pablo Alfaro
 *
 * Created on 9 de septiembre de 2016, 02:37 PM
 */

#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"
#include <math.h>

class Circulo : public Figura{
public:
    Circulo();
    Circulo(string nombre, string color, double radio);
    virtual ~Circulo();

    double radio;

    virtual double area();
    virtual double perimetro();
    void operator~();
    void operator!();

    
private:

};

#endif /* CIRCULO_H */
