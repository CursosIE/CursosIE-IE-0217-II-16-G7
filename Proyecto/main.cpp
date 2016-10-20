#include "shearsort.h"




int main(int argc, char** argv) {

int n = 4;

double** mat = new double*[n];
	for (int i = 0; i < n; i++) {
		mat[i] = new double[n];
	}
mat[0][0] = 5;
mat[0][1] = 61;
mat[0][2] = 7;
mat[0][3] = 45;
mat[1][0] = 2;
mat[1][1] = 49;
mat[1][2] = 1;
mat[1][3] = 23;
mat[2][0] = 31;
mat[2][1] = 9;
mat[2][2] = 85;
mat[2][3] = 298;
mat[3][0] = 3;
mat[3][1] = 97;
mat[3][2] = 82;
mat[3][3] = 32;

Shearsort s1(n, mat);

~s1;
cout <<" "<<endl;
s1.sort();
~s1;

delete mat;







}
