#include <iostream>
using namespace std;

int main (){
	int matriz [5];
	int matriz2 [5][5];
	int suma=0;
	for (int i=0; i<5; i++){
			cout<<"ingrese los datos de la primera fila: ";
			cin>>matriz[i];
		}
	for (int i=0; i<5; i++){
			cout<<matriz[i]<<"\t";
		}
		cout<<"\n";
	
		for (int j=0; j<5; j++){
			cout<<"ingrese los datos de la primera columna: ";
			cin>>matriz[j];
		}
		for (int j=0; j<5; j++){
			cout<<matriz[j]<<"\t";
		}
	cout<<"\n";
	
	//no mover nada de aquí para arriba.
	
	for (int i = 0; i < 5; ++i) {
    suma += matriz [i]; 
  }
  
  cout<<"\n";
  
  for (int j= 0; j< 5; ++j) {
    suma += matriz [j]; 
    
	}
  for (int i=0; i<5; i++){
			for (int j=0; i<5; j++){
				cout<<matriz [i]<< + matriz [j]<<"\t";
			}
			cout<<"\n";
			}

	cout<<"\t";
	
	
	}