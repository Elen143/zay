#include<iostream>
using namespace std;

int main (){
	int n1, n2, res=1;
	cout<<"ingrese el primer numero \n";
	cin>>n1;
	cout<<"ingrese el segundo numero \n";
	cin>>n2;
		do {
			res=res*n1;
			n2=n2-1;
		}while (n2>=1);
		cout<<"el resultado es: " << res;
		
		return 0;
}