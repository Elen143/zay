#include<iostream>
using namespace std;

main(){
	int n1,n2,a;
	int suma, re, mult, div, pot;
	cout <<"ingrese el primer numero"<<"\n";
	cin >>n1;
	cout <<"ingrese el segundo numero"<<"\n";
	cin >>n2;
	
	cout <<"ingrese el numero de la operacion que desea"<<"\n";
	cout <<"suma...1" <<"\n";
	cout <<"resta...2"<<"\n";
	cout <<"multiplicacion...3"<<"\n";
	cout <<"division...4"<<"\n";
	cout <<"potencia...5"<<"\n";
	cin >>a;
	if(a==1){
		suma = n1+n2;
	cout<< suma;
	} 
 
		if(a==2){
			re= n1-n2;
			cout<< re;
		}
		
		if(a==3){
			mult = n1*n2;
			cout<<mult;
		}
		if(a==4){
			div = n1/n2;
			div <<mult;
		}
		
		if (a==5)
		
		return 0;

	}
	

	
	