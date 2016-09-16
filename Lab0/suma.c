#include <stdio.h>
#include <stdlib.h>

/**
 * @file Programa Suma hecho en C
 * @author Carlos Jimenez
 * @author Pablo Alfaro
 * @date 22 Ago 2016
 *
 */

/**
 * @brief Este es el programa se encarga de realizar sumas de datos que se ingresen en la terminal.
 *
 * Detailed explanation.
 */
int main(int argc, char *argv[]) {
  /**
  * @param suma contiene los 3 parametros que entran en la terminal y son sumados.
  */
  float suma = atof(argv[1]) + atof(argv[2]) + atof(argv[3]);

  printf("%.1f\n",suma );



  return 0;
}
