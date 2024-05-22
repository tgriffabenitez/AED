/**
 * @file abs.cpp
 * @brief Programa que implementa la función f3 vista en clase el día 15/05/2024.
 * @version 0.1
 * @date 2024-05-21
 * @author Tomás Martín, Griffa Benitez
 */
#include <cassert>

/**
 * La función f3 se define de la siguiente manera:
 * - Si el entero x es menor que -3, devuelve x.
 * - Si el entero x es mayor que 3, devuelve x.
 * - De lo contrario, devuelve -x.
 *
 * @param x Numero entero que se quiere evaluar en la funcion.
 * @return int El resultado de la funcion f3 aplicada al entero x.
 */
int f3(int x);

int main(void)
{
    assert(f3(-4) == -4);
    assert(f3(-3) == 3);
    assert(f3(-2) == 2);
    assert(f3(-1) == 1);
    assert(f3(0) == 0);
    assert(f3(1) == -1);
    assert(f3(2) == -2);
    assert(f3(3) == -3);
    assert(f3(4) == 4);

    return 0;
}

int f3(int x)
{
    return x < -3 ? x : x > 3 ? x : -x;
}
