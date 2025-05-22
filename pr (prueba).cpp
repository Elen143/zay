#include<iostream>
using namespace std;

int main () {
	int n=1, p=2, resultado;
	while (n<=100){
		for (n=1; n<=100; n++){
			int d = 0;
			for (int i=1; i<=n; i++){
				if (n%i ==0){
					d++;
				}
			}
			if (d == 2) {
	cout<< n <<"\n";
		}
		}
		while (p%2 ==0){
			for (n; p%2; n%p){
				if (p%2 ==0){
					resultado << n*p ;
				}
			}
		}
		}
		}