#include <iostream>
using namespace std;

int main (){
	int n1, n2, p=1;
	cout<<"ingrese el primer numero \n";
	cin>>n1;
	cout<<"ingrese el segundo numero \n";
	cin>>n2;
	for (int i=1; i<=n2; i++){
		p=p * n1;
	}
	cout<<"el resultado de la potencia es "<< p<<"\n";
	
	return 0;
}