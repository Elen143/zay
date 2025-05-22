#include <iostream>

int main() {
  int arreglo[] = {1, 2, 3, 4, 5};
  int suma = 0;

  // Usando un bucle for
  for (int i = 0; i < 5; ++i) {
    suma += arreglo[i]; // suma = suma + arreglo[i]
  }

  std::cout << "La suma de los elementos del arreglo es: " << suma << std::endl;

  // Usando un bucle while (ejemplo)
  int j = 0;
  suma = 0;
  while (j < 5) {
    suma += arreglo[j];
    j++;
  }

  std::cout << "La suma de los elementos del arreglo (usando while) es: " << suma << std::endl;

  return 0;
}