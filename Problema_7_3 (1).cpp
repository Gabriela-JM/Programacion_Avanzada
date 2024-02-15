#include <iostream>

struct Fecha {
    int dia;
    int mes;
    int anno;
};

Fecha sumarDiasAFecha(Fecha fechaInicial, int diasAAnadir) {
    // Convertir la fecha inicial a un número de días desde una fecha base
    int totalDias = fechaInicial.dia + (fechaInicial.mes - 1) * 31 + (fechaInicial.anno - 1) * 365;

    // Sumar los días especificados
    totalDias += diasAAnadir;

    // Calcular la nueva fecha
    Fecha nuevaFecha;
    nuevaFecha.anno = totalDias / 365 + 1;
    totalDias %= 365;
    nuevaFecha.mes = totalDias / 31 + 1;
    nuevaFecha.dia = totalDias % 31;

    return nuevaFecha;
}

int main() {
    // Ejemplo de uso
    Fecha fechaInicial = {16, 5, 2022};
    int diasAAnadir = 365;

    // Obtener la nueva fecha llamando a la función
    Fecha nuevaFecha = sumarDiasAFecha(fechaInicial, diasAAnadir);

    // Imprimir la nueva fecha
    std::cout << "Fecha actual: " << fechaInicial.dia << "/" << fechaInicial.mes << "/" << fechaInicial.anno << std::endl;
    std::cout << "Nueva fecha después de " << diasAAnadir << " días: " << nuevaFecha.dia << "/" << nuevaFecha.mes << "/" << nuevaFecha.anno << std::endl;

    return 0;
}