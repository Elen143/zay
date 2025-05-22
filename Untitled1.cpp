#include<iostream>
using namespace std;

main(){
int fac,cont,res;

	//ingresar el numero
	cout<<"ingrese el numero para obtener su factorial: "<<"\n";
	cin>>fac;
	//si el numero es negativo no realiza proceso
	if(fac<0){
		cout<<"Numero es negativo intente de nuevo.";
		}else 
		{
			cont=1;
			res=1;
			//mientras el contador sea menor o igual al numero ingresado el proceso seguira
			while(res<=fac){
				//el fac multiplica el contador que aumenta cada proceso
				cont = cont*res;
				//el contador aumenta uno 
				res = res+1;
				cout<<res-1<<"*";
			}
			cout<<":"<<cont;
		
		}
	return 0;
	
}