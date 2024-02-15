#include <iostream>
#include <climits>

using namespace std;

int main() {
    int filas, columnas;

    // Solicitar al usuario las dimensiones de la matriz
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;

    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    // Declarar la matriz
    int matriz[filas][columnas];

    // Leer la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Visualizar la matriz
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Encontrar el mayor y el menor elemento de la matriz
    int mayor = INT_MIN;
    int menor = INT_MAX;
    int posMayorFila, posMayorColumna, posMenorFila, posMenorColumna;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                posMayorFila = i;
                posMayorColumna = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posMenorFila = i;
                posMenorColumna = j;
            }
        }
    }

    // Mostrar el resultado
    cout << "El mayor elemento es " << mayor << " en la posición [" << posMayorFila << "][" << posMayorColumna << "]." << endl;
    cout << "El menor elemento es " << menor << " en la posición [" << posMenorFila << "][" << posMenorColumna << "]." << endl;

    return 0;
}