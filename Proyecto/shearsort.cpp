
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


void sort(){


	Shearsort m1(this->n, this->matriz);
	Shearsort sort(n,this->matriz);

	int contador;
		while(contador!=(n+1)){

			for(int x=0; x<n; x++){

				if((this->n%2)==0){//filas pares
					for(int i=0; i<this->n; i++){
						for(int j=0; j<this->n; j++){
							if(this->matriz[i][j]<this->matriz[i][j+1]){
								int temp=this->matriz[i][j];
								this->matriz[i][j]=this->matriz[i][j+1];
								this->matriz[i][j+1]=temp;
	      }else{}
	     }
	    }
	   }
				else if((this->n%2)!=0){//filas impares
					for(int i=0; i<this->n; i++){
						for(int j=0; j<this->n; j++){
							if(this->matriz[i][j]>this->matriz[i][j+1]){
								int temp=this->matriz[i][j];
								this->matriz[i][j]=this->matriz[i][j+1];
								this->matriz[i][j+1]=temp;
	      }else{}
	     }
	    }
	   }
	  }
			for(){}
			contador+=1;
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
