
#include <cstdlib>
#include "iostream"
#include "shearsort.h"

Shearsort::Shearsort()
{
	///@brief Constructor simple
}
Shearsort::Shearsort(int n, double** matriz)
{
	this->n =n;
	this->matriz =matriz;
}
Shearsort::~Shearsort()
{
	///@brief Destructor
}



double** Shearsort::sort(){

int contador = 2*(this->n)-1;
int temp;
while (contador!= 0){


		for (int i = 0; i < this->n; i++) {
			if (i%2==0) {
				for (int j = 0; j < this->n; j++) {
					for (int k = 0; k < this->n-1; k++) {
						if (this->matriz[i][k]  >  this->matriz[i][k+1]) {

							temp = this->matriz[i][k];
        			this->matriz[i][k] = this->matriz[i][k+1];
        			this->matriz[i][k+1] = temp;
						}
					}
				}
			}
			else{
					for (int j = 0; j < this->n; j++) {
						for (int k = 0; k < this->n-1; k++) {
							if (this->matriz[i][k]  <  this->matriz[i][k+1]) {

								temp = this->matriz[i][k];
	        			this->matriz[i][k] = this->matriz[i][k+1];
	        			this->matriz[i][k+1] = temp;
						}
					}
				}
			}
		} contador = contador-1;
		for (int i = 0; i < this->n; i++) {
			for (int j = 0; j < this->n; j++) {
				for (int k = 0; k < this->n-1; k++) {
					if (this->matriz[k][i]  >  this->matriz[k+1][i]) {

							temp = this->matriz[k][i];
        			this->matriz[k][i] = this->matriz[k+1][i];
        			this->matriz[k+1][i] = temp;
					}
				}
			}
		}contador = contador-1;
	}
}



void Shearsort::operator~() {

	for(int i=0;i<this->n;i++){
			for(int j=0; j<this->n; j++){
				cout<< this->matriz[i][j]<<"\t";
			}
			cout<<endl;
	}
}
