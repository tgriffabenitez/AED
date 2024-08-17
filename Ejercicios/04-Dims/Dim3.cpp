#include <array>
#include <iostream>

using std::array;

int main() {
    const int MESES = 12;
    const int VENDEDORES = 3;
    const int REGIONES = 4;

    int vendedor, region, mes, importe;
    array<array<array<int, MESES>, REGIONES>, VENDEDORES> ventas_por_mes = {0};

    while (std::cin >> vendedor >> region >> mes >> importe)
        ventas_por_mes.at(vendedor - 1).at(region - 1).at(mes - 1) += importe;

    for (array<array<int, MESES>, REGIONES> ventas_por_region : ventas_por_mes) {
        for (array<int, MESES> ventas : ventas_por_region) {
            for (int venta : ventas)
                std::cout << venta << '\t';
            std::cout << '\n';
        }
        std::cout << '\n';
    }

    return 0;
}
