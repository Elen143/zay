#include <iostream>
using namespace std;

int main() {
    int n[10];
    int no[10];

    // Ingreso manual de los 10 números
    cout << "Ingrese 10 numeros: \n";
    for (int i = 0; i < 10; i++) {
        cin >> n[i];
        no[i] = n[i]; 
    }

  
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (no[i] > no[j]) {
           
                no[i] = no[i] + no[j];
                no[j] = no[i] - no[j];
                no[i] = no[i] - no[j];
            }
        }
    }

    
    cout << "Numeros ordenados de forma ascendente:\n";
    for (int i = 0; i < 10; i++) {
        cout << no[i] << " ";
    }
    cout << "\n";

    return 0;
}




