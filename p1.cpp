#include <iostream>
using namespace std;

int main (){
	int vector []={1,2,3,4,5};
	int multi=1;
	
	for (int i=0; i<5; i++){
		multi = multi * vector [i];
	}
	
	cout<<"el resultado de la multiplicación es: "<<multi<<"\n";

	
	return 0;
}