#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 10;
    int arreglo_original[TAMANO];
    int arreglo_ordenado[TAMANO];
    
    // El usuario introduce los números
    cout << "Introduce 10 numeros enteros:\n";
    for(int i = 0; i < TAMANO; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo_original[i];
        arreglo_ordenado[i] = arreglo_original[i];
    }
    
    // Ordenamiento con algoritmo de burbuja (sin variable temporal)
    for(int i = 0; i < TAMANO - 1; i++) {
        for(int j = 0; j < TAMANO - i - 1; j++) {
            if(arreglo_ordenado[j] > arreglo_ordenado[j + 1]) {
                // Intercambio usando sumas/restas
                arreglo_ordenado[j] = arreglo_ordenado[j] + arreglo_ordenado[j + 1];
                arreglo_ordenado[j + 1] = arreglo_ordenado[j] - arreglo_ordenado[j + 1];
                arreglo_ordenado[j] = arreglo_ordenado[j] - arreglo_ordenado[j + 1];
            }
        }
    }
    
    // Mostrar resultados
    cout << "\nArreglo original:\n";
    for(int i = 0; i < TAMANO; i++) {
        cout << arreglo_original[i] << " ";
    }
    
    cout << "\n\nArreglo ordenado:\n";
    for(int i = 0; i < TAMANO; i++) {
        cout << arreglo_ordenado[i] << " ";
    }
    
    return 0;
}