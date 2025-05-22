#include<iostream>
using namespace std;

int main(){
	
	int numeros[10];
	int arreglo_ordenados[10];
	int ordenados=0;
	int	menor=0;
	
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese el valor numero "<<i<<": ";
		cin>>numeros[i];
	}
	for(int j=0; j<10; j++){
		menor=0;
		while(numeros[menor]==-1){
			menor++;
		}
		for(int k=0; k<10; k++){	
			if(numeros[k] != -1 && numeros[menor]>numeros[k]){
				menor=k;
			}
		}
		arreglo_ordenados[ordenados++]=numeros[menor];
		numeros[menor]=-1;
	}
	
	for(int l=0; l<10; l++){
		cout<<"El valor ordenado en la posicion "<<l<<" es: ";
		cout<<arreglo_ordenados[l]<<"\n";
	}
	
	return 0;
}
