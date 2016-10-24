#include "shearsort.h"
#include "cstdlib"




int main(int argc, char** argv) {

int n = atoi(argv[1]);

double** mat = new double*[n];
	for (int i = 0; i < n; i++) {
		mat[i] = new double[n];
	}


for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    mat[i][j] = rand()%100 +1;
  }
}

Shearsort s1(n, mat);

cout <<" "<<endl;
cout <<"Matriz sin ordenar"<<endl;
cout <<" "<<endl;
~s1;
cout <<" "<<endl;
s1.sort();
cout <<" "<<endl;
cout <<"Matriz ordenada"<<endl;
cout <<" "<<endl;
~s1;

delete mat;

}
