#include<iostream>
using namespace std;

int main (){
	int a, fac=1;
	cout<<"ingrese el numero"<<"\n";
	cin>>a;
	for (int i=1;i<=a;i++){
		fac*=i;
	}
	cout << "la factorial es\n" 
	<< fac << "\n";
	
	
	return 0;
}