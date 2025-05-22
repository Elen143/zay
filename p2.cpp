#include <iostream>
using namespace std;

int main (){
	int vector [100];
	int numero;
	
	cout<<"ingrese la cantidad de elementos: ";
	cin>>numero;
	
	for (int i=4; i>=0; i--){
		cout<<"digite un numero: ";
		cin>>vector[i];
	}
	for (int i=4; i>=0; i--){
		cout<<i<<"="<<vector [i]<<"\n";
	}
	
	
	return 0;
}