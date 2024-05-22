# abs

### Objetivo

Implementar la funcion `abs()` utilizando el operador ternario en C++. La funcion toma un entero $n$ devuelve el valor absoluto.

## Funcion abs

La funcion abs se define matematicamente como:

$$\mathbb{Z} \to \mathbb{Z} : abs(x) = |x| = \sqrt{x^2} = \begin{cases} x &  x \geq 0 \\ -x & e.o.c \end{cases}$$

Donde:

-   $x$ es un numero entero.

### Ejemplo

Si $x = 3$ entonces `abs(3)` devuelve el numero $3$

Si $x = -5$ entonces `abs(-5)` devuelve el numero $5$

### Implementacion en C++

```C++
int abs(int x)
{
    return x >= 0 ? x : -x;
}
```

## Ejercicio del PPT dado en clase

La funcion $f_3(x)$ se definio matematicamente como

$$\mathbb{R} \to \mathbb{R} : f_3(x) = \begin{cases} x & x < -3 \\ x & x > 3 \\ -x & e.o.c \end{cases}$$

### Implementacion en C++

```C++
int f3(int x) {
    return x < -3 ? x : x > 3 ? x : -x;
}
```

### Compilacion y ejecucion del codigo

```bash
g++ abs.cpp -o abs --std=c++23
```

```bash
./abs
```
