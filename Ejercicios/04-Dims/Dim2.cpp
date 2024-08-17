#include <array>
#include <iostream>

using std::array;

int main() {
    const int MESES = 12;
    const int VENDEDORES = 3;

    int vendedor, mes, importe;
    array<array<int, MESES>, VENDEDORES> ventas_por_mes = {0};

    while (std::cin >> vendedor >> mes >> importe)
        ventas_por_mes.at(vendedor - 1).at(mes - 1) += importe;

    for (const auto& ventas : ventas_por_mes) { // ventas es la referencia al array de meses dentro de cada vendedor
        for (int venta : ventas)
            std::cout << venta << '\t';
        std::cout << '\n';
    }
    std::cout << '\n';

    return 0;
}