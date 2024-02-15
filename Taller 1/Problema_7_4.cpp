#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

void ochenta_primos_desde(int inicio) {
    int contador = 0;
    int numero = inicio;

    while (contador < 80) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }
}

int main() {
    int numero_inicio;
    cout << "Ingrese un número para encontrar los primeros 80 números primos a partir de ese número: ";
    cin >> numero_inicio;

    ochenta_primos_desde(numero_inicio);

    return 0;
}