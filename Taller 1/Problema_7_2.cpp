#include <iostream>

using namespace std;

void invertir() {
  int array[5];

  // Solicitar al usuario que ingrese los valores del arreglo
  cout << "Ingrese 5 números enteros separados por espacios: ";
  for(int i = 0; i < 5; i++) {
    cin >> array[i];
  }

  int arrayInvertido[5];

  for(int i = 0; i < 5; i++) {
    arrayInvertido[i] = array[4 - i];
  }

  // Imprimir array invertido
  cout << "Arreglo invertido: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arrayInvertido[i] << " ";
  }
}

int main() {
  invertir();
  return 0;
}