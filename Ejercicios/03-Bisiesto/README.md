# IsBisiestoStruct e IsBisiestoRef

### Objetivo

Implementar la funcion IsBisiesto de por estructura

## Funcion IsBisiestoStruct

La funcion **IsBisiestoStruct** se define matematicamente como:

```math
\mathbb{N} \to \text{year_t} : \text{IsBisiesto}(n) = (n \>\> \% \>\>4 = 0 \land n \>\> \% \>\> 100 \neq 0) \lor (n \>\> \% \>\> 400 = 0)
```

Donde:

-   $n$ es un numero natural.
-   $n \in [1582;5324]$
-   Se toma en cuenta solamente el calendario Gregoriano

Un anio es bisiesto si cumple con alguna de las siguientes condiciones:

1. Es divisible por 4, pero no es divisible por 100.
2. Es divisible por 400.

### Implementacion en C++

Se define la estructura `year_t` que contiene un campo `value` de tipo `bool` y un campo `error` de tipo `bool`.

```C++
typedef struct {
    bool value; // true si es bisiesto, false si no es bisiesto
    bool error; // true si hay error, false si no hay error
} year_t;

```

La funcion `IsBisiestoStruct` recibe un parametro de tipo `unsigned` y devuelve un parametro de tipo `year_t`.

```C++
year_t IsBisiestoStruct(unsigned n);
```

La implementacion de la funcion `IsBisiestoStruct` es la siguiente:

```C++
year_t IsBisiestoStruct(unsigned n) {
    year_t bisiesto;

    if (n < 1584 || n > 5323) {
        bisiesto.value = false;
        bisiesto.error = true;
    }

    else {
        bisiesto.value = ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
        bisiesto.error = false;
    }

    return bisiesto;
}
```

### Ejemplo de uso

Si n = 583, entonces el resultado de la funcion es `value = false` y `error = true`.

Si n = 1900, entonces el resultado de la funcion es `value = false` y `error = false`.

Si n = 2000, entonces el resultado de la funcion es `value = true` y `error = false`.

```C++
assert(!IsBisiestoStruct(583).value && IsBisiestoStruct(583).error);
assert(!IsBisiestoStruct(1900).value && !IsBisiestoStruct(1900).error);
assert(IsBisiestoStruct(2000).value && !IsBisiestoStruct(2000).error);
```

### Compilacion y ejecucion del codigo

```bash
g++ IsBisiestoStruct.cpp -o IsBisiestoStruct --std=c++23
```

```bash
./IsBisiestoStruct
```
