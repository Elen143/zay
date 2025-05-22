#include <iostream>
using namespace std;

int main (){
	int v [10];
	int numero;
	int promedio;
	int mayor;
	
	for (int i=0; i<10; i++){
		cout<<"ingrese un numero entero: ";
		cin>>v [i];
		
		//no nover nada de aquí para arriba
		
		if (v[i]<= promedio){
			promedio == v [i];
			
		}
	}
	
	
	for (int i=0; i<10; i++){
	if (promedio == mayor){
			mayor = v [i] == promedio;
		}
	}
	
	for (int i=0; i<10; i++){
	if (v [i] == promedio){
			mayor = v [i] == promedio;
			
			if (mayor < promedio){
		cout<<"el promedio es:  "<<promedio;
		
			}

		}
	}
	

	return 0;
}
