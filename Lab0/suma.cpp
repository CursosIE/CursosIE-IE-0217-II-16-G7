#include "stdio.h"
#include "iostream"
#include "cstdlib"
using namespace std;

   /** Este es el metodo main que contiene las variables
      * que van a ser utilizadas para realizar la suma. */
int main (int argc, char *argv[]){
 /**@param [in] num1*/
 float num1 = atof(argv[1]);
 /**@param [in] num2*/
 float num2 = atof(argv[2]);
 /**@param [in] num3*/
 float num3 = atof(argv[3]);

 /**@param [in] resultado */
 float resultado = num1+num2+num3;

 cout<< resultado << endl;
 return 0;
}
