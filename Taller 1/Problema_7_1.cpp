#include <iostream>
#include <string>

void romanos() {
    std::string romano;
    std::cout << "Ingrese un número romano: ";
    std::cin >> romano;

    int resultado = 0;

    for (int i = 0; i < romano.length(); i++) {
        // Reglas de conversión
        if (romano[i] == 'M') {
            resultado += 1000;
        } else if (romano[i] == 'D') {
            resultado += 500;
        } else if (romano[i] == 'C') {
            resultado += 100;
        } else if (romano[i] == 'L') {
            resultado += 50;
        } else if (romano[i] == 'X') {
            resultado += 10;
        } else if (romano[i] == 'V') {
            resultado += 5;
        } else if (romano[i] == 'I') {
            if (i + 1 < romano.length()) {
                if (romano[i + 1] == 'V' || romano[i + 1] == 'X') {
                    resultado -= 1;
                } else {
                    resultado += 1;
                }
            } else {
                resultado += 1;
            }
        }
    }

    std::cout << "El número romano " << romano << " es: " << resultado << std::endl;
}

int main() {
    romanos();
    return 0;
}