#include "shearsort.h"




int main(int argc, char** argv) {

int n = 3;

double** mat = new double*[n];
	for (int i = 0; i < n; i++) {
		mat[i] = new double[n];
	}
mat[1][1] = 5;
mat[1][2] = 6;
mat[1][3] = 7;
mat[2][1] = 2;
mat[2][2] = 4;
mat[2][3] = 1;
mat[3][1] = 3;
mat[3][2] = 9;
mat[3][3] = 8;

for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
      cout<< mat[i][j]<<"\t";
    }
    cout<<endl;
}

Shearsort s1(n, mat);
//~s1;
s1.sort();







}
