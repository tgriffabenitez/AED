/**
 * @file veces.cpp
 * @brief Programa que implementa la funcion veces usando recursividad.
 * @version 0.1
 * @date 2024-05-18
 * @author Tomás Martín, Griffa Benitez
 */
#include <cassert>
#include <string>

using std::string;

/**
 * @brief Funcion que concatena un carácter 'c' n veces utilizando recursividad.
 *
 * @param c Caracter a concatenar.
 * @param n Numero de veces que se concatenara el caracter.
 * @return string Cadena resultante con el carácter 'c' repetido 'n' veces.
 */
string veces(char c, int n);

int main(void)
{
    assert(veces('a', -1) == "");
    assert(veces('a', 0) == "");
    assert(veces('a', 1) == "a");
    assert(veces('a', 5) == "aaaaa");

    return 0;
}

string veces(char c, int n)
{
    return n > 0 ? c + veces(c, n - 1) : "";
}