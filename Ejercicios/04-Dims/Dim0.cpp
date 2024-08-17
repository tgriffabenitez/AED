#include <iostream>

// PROTOTIPO
int ingresar_importe();

int main() {
    int totalVentas = 0;
    int importe = 0;

    //Loop que lee importes hasta que detecta un -1
    while (true) {
        importe = ingresar_importe();
        if (importe == -1) break;
        totalVentas += importe;
    }

    std::cout << "El total de ventas es: " << totalVentas << std::endl;

    return 0;
}

// Funcion ingreso ventas
int ingresar_importe() {
    int importe;
    std::cin >> importe;
    return importe;
}
