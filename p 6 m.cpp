#include<iostream>
using namespace std;

int main (){
	int matriz1 [100][100];
	int filas;
	int columnas;
	
	cout<<"ingrese la cantidad de filas que desea: ";
	cin>>filas;
	cout<<"ingrese la cantidad de columnas que desea: ";
	cin>>columnas;	
	
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"digite un numero: ";
			cin>>matriz1 [i][j];
		}
	}
	
	if (filas==columnas){
		for (int i=0; i<filas; i++){
			for (int j=0; j<columnas; j++){
				if (matriz1[i][j] == matriz1 [j][i]);
			}
		}
	}
	
	if (filas==columnas){
		cout<<"la matriz es transversa";
	}
	
	else {
		cout<<"no es una matriz transversa";
	}
	
	return 0;
}