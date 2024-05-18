# Veces

### Objetivo

Implementar la funcion `veces` utilizando recursividad y el operador ternario en C++. La funcion toma un caracter $c$, un numero natural $n$ y devuelve una cadena que consiste en el caracter $c$ repetido $n$ veces.

## Funcion veces

La funcion veces se define matematicamente como:

$\Sigma \times \mathbb{N} \to \Sigma^* : veces(c, n) = c \cdot n$

Donde:

-   $c$ es un caracter.
-   $n$ es un numero natural.
-   $c \cdot n$ representa la concatenacion del caracter $c$, $n$ veces.

### Ejemplo

Si $c$ = 'a' y $n$ = 5, entonces `veces('a', 5)` devuelve la cadena `"aaaaa"`

### Implementacion en C++

```C++
using std::string

string veces(char c, int n)
{
    return n > 0 ? c + veces(c, n - 1) : "";
}
```

### Compilacion y ejecucion del codigo

```bash
g++ veces.cpp -o veces --std=c++23
```

```bash
./veces
```
