/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Figura.h
 * Author: Pablo Alfaro
 *
 * Created on 6 de septiembre de 2016, 08:57 PM
 */

#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
#include "string"
#include <math.h>

using namespace std;

class Figura {
public:
    Figura();
    Figura(string nombre, string color);
    virtual ~Figura();

    string nombre;
    string color;

    virtual double area();
    virtual double perimetro();
    void operator~();
    void operator!();


private:

};

#endif /* FIGURA_H */
