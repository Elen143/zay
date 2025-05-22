#include <iostream>
using namespace std;

int main() {
    int a, i= 1, fac= 1;
    cout << "Ingrese un numero: ";
    cin >> a;
    
    do {
        fac *= i;
        i++;
    } while (i <= a);
    
    cout << "La factorial es " << fac << "\n";
    
    return 0;
}