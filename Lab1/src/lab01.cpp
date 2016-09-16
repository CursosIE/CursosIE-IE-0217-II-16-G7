#include "stdio.h"
#include "iostream"
#include "cstdlib"
#include <string.h>
using namespace std;


/** Este es el metodo encargado de realizar la comparacion para averiguar cual es la proteina ingresada*/

char* traducirARNaAA(char* arn, int size){

  char amn[size/3] = "";
  int i;

  for (i = 0; i < strlen(arn)/3; i++) {
    char prueba[3] = {arn[3*i],arn[3*i+1],arn[3*i+2]};
  //  cout << prueba<< endl;
    if (strstr(prueba, "UUU")||strstr(prueba, "UUC")){
        strcat(amn, "F");
    }else{
      if (strstr(prueba, "UUA")||strstr(prueba, "UUG")||strstr(prueba, "CUU")||strstr(prueba, "CUC")||strstr(prueba, "CUA")||strstr(prueba, "CUG")){
        strcat(amn, "L");
      }else{
        if (strstr(prueba, "AUU")||strstr(prueba, "AUC")||strstr(prueba, "AUA")){
          strcat(amn, "I");
        }else{
          if (strstr(prueba, "AUG")){
            strcat(amn, "M");
          }else{
            if (strstr(prueba, "GUU")||strstr(prueba, "GUC")||strstr(prueba, "GUA")||strstr(prueba, "GUG")){
              strcat(amn, "G");
            }else{
              if (strstr(prueba, "UCU")||strstr(prueba, "UCC")||strstr(prueba, "UCA")||strstr(prueba, "UCG")){
                strcat(amn, "S");
              }else{
                if (strstr(prueba, "CCU")||strstr(prueba, "CCC")||strstr(prueba, "CCA")||strstr(prueba, "CCG")){
                  strcat(amn, "P");
                }else{
                  if (strstr(prueba, "ACU")||strstr(prueba, "ACC")||strstr(prueba, "ACA")||strstr(prueba, "ACG")){
                    strcat(amn, "T");
                  }else{
                    if (strstr(prueba, "GCU")||strstr(prueba, "GCC")||strstr(prueba, "GCA")||strstr(prueba, "GCG")){
                      strcat(amn, "A");
                    }else{
                      if (strstr(prueba, "GGU")||strstr(prueba, "GGC")||strstr(prueba, "GGA")||strstr(prueba, "GGG")){
                        strcat(amn, "G");
                      }else{
                        if (strstr(prueba, "UAU")||strstr(prueba, "UAC")){
                          strcat(amn, "Y");
                        }else{
                          if (strstr(prueba, "UAA")||strstr(prueba, "UAG")){
                            strcat(amn, "|");
                          }else{
                            if (strstr(prueba, "CAU")||strstr(prueba, "CAC")){
                              strcat(amn, "H");
                            }else{
                              if (strstr(prueba, "CAA")||strstr(prueba, "CAG")){
                                strcat(amn, "Q");
                              }else{
                                if (strstr(prueba, "AAU")||strstr(prueba, "AAC")){
                                  strcat(amn, "N");
                                }else{
                                  if (strstr(prueba, "AAA")||strstr(prueba, "AAG")){
                                    strcat(amn, "K");
                                  }else{
                                    if (strstr(prueba, "GAU")||strstr(prueba, "GAC")){
                                      strcat(amn, "D");
                                    }else{
                                      if (strstr(prueba, "GAA")||strstr(prueba, "GAG")){
                                        strcat(amn, "E");
                                      }else{
                                        if (strstr(prueba, "UGU")||strstr(prueba, "UGC")){
                                          strcat(amn, "C");
                                        }else{
                                          if (strstr(prueba, "UGG")){
                                            strcat(amn, "W");
                                          }else{
                                            if (strstr(prueba, "UGA")){
                                              strcat(amn, "|");
                                            }else{
                                              if (strstr(prueba, "CGU")||strstr(prueba, "CGG")||strstr(prueba, "CGC")||strstr(prueba, "CGA")){
                                                strcat(amn, "R");
                                              }else{
                                                if (strstr(prueba, "AGU")||strstr(prueba, "AGC")){
                                                  strcat(amn, "S");
                                                }else{
                                                  if (strstr(prueba, "AGA")||strstr(prueba, "AGG")){
                                                    strcat(amn, "R");
                                                  }else{
                                                    return 0;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

return amn;
}


/**
 *Metodo encargado de imprimir el arreglo*/
void imprimirArregloDeChar(char* x, int size){
  int i;
    for (i = 0; i < size; i++) {
      cout << x[i] << endl;
    }
}



int main (int argc, char *argv[]){

//char s[argc] = argv;
char* s = argv[1];
char* s_ptr = &s[0];
int size = strlen(s_ptr);

cout << s << endl;
traducirARNaAA(s, size);

cout << traducirARNaAA(s, size) << endl;
cout << "Con el metodo de imprimir" << endl;

//Aqui falla no se por que, debe estar relacionado al warning, porque si yo imprimo directamente desde e
//otro metodo no pasa nada malo y lo tira bien.

imprimirArregloDeChar(traducirARNaAA(s, size), strlen(s)/3);

return 0;
}
