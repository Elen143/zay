#include<iostream>
using namespace std;

int main (){
	int arreglo [100];
	int numero=0;
	int mayor;
	int suma=0;
	
	cout<<"ingresa la cantidad de elementos para el arreglo:";
	cin>>numero;
	
	for (int i=0; i<numero; i++){
		cout<<"ingrese el numero: ";
		cin>>arreglo[i];
		suma+=arreglo[i];
		
		if (arreglo[i] > mayor){
			mayor = arreglo [i];
		}
	}
	
	if (mayor==suma){
		cout<<"el numero: "<<mayor<<" coincide con la suma de los numeros de los vectores";
	}
	
	else{
	cout<<" no hay coincidencia";
	 }
	//cout<<"el numero mayor es: "<<mayor; (solo se utiliza cuando deseo que me muestre el numero mayor de los numeros agregados.
	
	return 0;
}