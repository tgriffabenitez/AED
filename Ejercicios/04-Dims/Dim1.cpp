#include <array>
#include <iostream>

int main() {
    int const MESES = 12;
    
    int mes;
    int importe;
    std::array<int, MESES> ventas_por_mes = {0};

    while (std::cin >> mes >> importe)
        ventas_por_mes.at(mes - 1) += importe;

    for (int venta : ventas_por_mes)
        std::cout << venta << ' ';
        
    return 0;
}
