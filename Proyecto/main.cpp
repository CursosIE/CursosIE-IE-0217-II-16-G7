#include "shearsort.h"




int main(int argc, char** argv) {




  double l=0;;
	int n=4;
	double **mat1 = (double **) malloc(sizeof(double *)*n);
	for(int i=0; i<n; i++){
        mat1[i] = (double *) malloc(sizeof(double)*n);
	}
	for(int i=0;i<n;i++){
		for(int j=0; j<n; j++){
            mat1[i][j]=2;
  			}
		}

    Matriz m1(n, mat1);







}
