
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


	Shearsort m1(this->n, this->matrix);
	Shearsort sort(n,this->matrix);

	int contador;
		while(contador!=(n+1)){

			for(int x=0; x<n; x++){
				
				if((n%2)==0){//filas pares
					for(int i=0; i<n; i++){
						for(int j=0; j<n; j++){
							if(matriz[i][j]<matriz[i][j+1]){
								int temp=matriz[i][j];
								matriz[i][j]=matriz[i][j+1];
								matriz[i][j+1]=temp;
	      }else{}
	     }
	    }
	   }
				else if((n%2)!=0){//filas impares
					for(int i=0; i<n; i++){
						for(int j=0; j<n; j++){
							if(matriz[i][j]>matriz[i][j+1]){
								int temp=matriz[i][j];
								matriz[i][j]=matriz[i][j+1];
								matriz[i][j+1]=temp;
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

	for(int i=0;i<m;i++){
			for(int j=0; j<n; j++){
				cout<< this->matriz[i][j]<<"\t";
			}
			cout<<endl;
		}

}
