#include<iostream>
using namespace std;

int main (){
	int m1 [3][3],f,c;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"ingrese un numero: ";
			cin>>m1[i][j];
		}
	}
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<m1 [i][j]<<"\t";
		}
		cout<<"\n";
	}

	//No mover ni madres de aquí para arriba.
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		}
	}
	
	cout<<"los numeros de la primera diagonal son: ";
	
	
			cout<<m1[0][0]<<"\t";
			cout<<m1[1][1]<<"\t";
			cout<<m1[2][2]<<"\t";
		
		cout<<"\n";
		
		//sí funciona, no mover nadaaaa.
		
		for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		}
	}
	
	cout<<"los numeros de la segunda diagonal son: ";
	
			cout<<m1[0][2]<<"\t";
			cout<<m1[1][1]<<"\t";
			cout<<m1[2][0]<<"\t";
		
		cout<<"\n";
	
	return 0;
}