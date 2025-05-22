#include<iostream>
using namespace std;

int main (){
	int matriz1[100][100];
	int matriz2 [100][100];
	int cantidad;
	int filas;
	int columnas;
	
	cout<<"ingrese la cantidad de filas que desea: ";
	cin>>filas;
	cout<<"ingrese la cantidad de columnas que desea: ";
	cin>>columnas;
	
	for (int i=0; i<filas; i++){
		cout<<"digite los numeros que desee en las fila: ";
		cin>>cantidad;
	}
		for (int j=0; j<columnas; j++){
		cout<<"digite los numeros que desee en las columnas: ";
		cin>>cantidad;
	}
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"la matriz es: "<<"\n";
			cin>>matriz1 [i][j] = filas+columnas;
		}
			cout<<"\t";
	}
//	return 0;
}