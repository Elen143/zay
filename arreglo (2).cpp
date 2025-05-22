#include <iostream>
using namespace std;

int main() {
    int n1[10], n2[10];
    
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese un numero entero: ";
        cin >> n1[i];
    }

    for(int i = 0; i < 10; i++) {
        int menor = 0;
        for(int j = 0; j < 10; j++) {
            if(n1[j] != -1) {
                if(n1[menor] > n1[j]) {
                    menor = j;
                }
            }
        }
        n2[i] = n1[menor];
        n1[menor] = -1;
    }

    cout << "Números ordenados de menor a mayor: \n";
    for(int i = 0; i < 10; i++) {
        cout << n2[i] << " ";
    }
    
    return 0;
}