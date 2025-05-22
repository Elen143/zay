#include <iostream>
using namespace std;


int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matrizsuma[3][3];
	
	cout<<"Digite matriz 1\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite la posicion ["<<i<<"]["<<j<<"]: ";cin>>matriz1[i][j];
		}
	}
	
	cout<<"Digite matriz 2\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite la posicion ["<<i<<"]["<<j<<"]: ";cin>>matriz2[i][j];
		}
	}
	
	cout<<"Matriz 1:\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j];
			cout<<" ";
		}
	cout<<"\n";
	}
	
	cout<<"Matriz 2:\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j];
			cout<<" ";
		}
	cout<<"\n";
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matrizsuma[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	
	cout<<"Suma de las matrices:\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizsuma[i][j];
			cout<<" ";
		}
	cout<<"\n";
	}
	
	return 0;
}
		