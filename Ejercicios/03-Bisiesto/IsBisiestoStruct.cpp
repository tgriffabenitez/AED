/**
 * @file IsBisiesto_struct.cpp
 * @brief Programa que implementa la funcion IsBisiestoStruct utilizando estructuras.
 * @version 0.1
 * @date 2024-06-24
 * @author Tomás Martín, Griffa Benitez
 */
#include <cassert>

typedef struct {
    bool value;
    bool error;
} year_t;

year_t IsBisiestoStruct(unsigned n);

int main(void) {
    assert(!IsBisiestoStruct(583).value && IsBisiestoStruct(583).error);
    assert(!IsBisiestoStruct(1583).value && IsBisiestoStruct(1583).error);
    assert(!IsBisiestoStruct(5324).value && IsBisiestoStruct(5324).error);
    assert(!IsBisiestoStruct(6000).value && IsBisiestoStruct(6000).error);

    assert(!IsBisiestoStruct(1900).value && !IsBisiestoStruct(1900).error);
    assert(IsBisiestoStruct(1904).value && !IsBisiestoStruct(1904).error);
    assert(!IsBisiestoStruct(2001).value && !IsBisiestoStruct(2001).error);
    assert(IsBisiestoStruct(2004).value && !IsBisiestoStruct(2004).error);
    assert(!IsBisiestoStruct(2007).value && !IsBisiestoStruct(2007).error);
    assert(IsBisiestoStruct(2024).value && !IsBisiestoStruct(2024).error);
    assert(!IsBisiestoStruct(2099).value && !IsBisiestoStruct(2099).error);
    assert(IsBisiestoStruct(2184).value && !IsBisiestoStruct(2184).error);
    assert(!IsBisiestoStruct(2201).value && !IsBisiestoStruct(2201).error);

    return 0;
}

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
