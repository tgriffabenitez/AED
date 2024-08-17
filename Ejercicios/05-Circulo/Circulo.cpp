#include <cassert>
#include <cmath>
#include <numbers>

const double PI_t = std::numbers::pi; // C++20

typedef struct {
    double x, y;
} punto_t;

typedef struct {
    punto_t centro;
    double radio;
} circulo_t;

/**
 * Comprueba si dos valores están en un rango de tolerancia.
 * @param v1 Primer valor.
 * @param v2 Segundo valor.
 * @param rango Rango de tolerancia, si no se especifica se usa 1e-3.
 * @return true si los valores están en el rango, false en caso contrario.
 */
bool estaEnRango(double v1, double v2, double rango = 1e-3);

/**
 * Comprueba si un punto esta dentro de un circulo.
 * @param circulo Circulo.
 * @param punto_1 Punto.
 * @return true si el punto está dentro del círculo, false en caso contrario.
 */
bool estaDentro(circulo_t circulo, punto_t punto_1);

/**
 * Calcula la distancia entre dos puntos.
 * @param p1 Primer punto.
 * @param punto_2 Segundo punto.
 * @return Distancia entre los dos puntos.
 */
double distanciaEntrePuntos(punto_t p1, punto_t punto_2);

/**
 * Calcula el area de un circulo.
 * @param circulo Circulo.
 * @return Area del circulo.
 */
double calcularArea(circulo_t circulo);

/**
 * Calcula el perimetro de un circulo.
 * @param circulo Circulo.
 * @return Perimetro del circulo.
 */
double calcularPerimetro(circulo_t circulo);

/**
 * Calcula el diametro de un circulo.
 * @param circulo Circulo.
 * @return Diametro del circulo.
 */
double calcularDiametro(circulo_t circulo);

/**
 * Mueve un circulo a un punto.
 * @param circulo Circulo.
 * @param punto_1 Punto.
 * @return Circulo movido al punto.
 */
circulo_t moverCirculo(circulo_t circulo, punto_t punto_1);

int main(void) {
    circulo_t circulo1 = {{0, 0}, 2.5};
    circulo_t circulo2 = {{1, 1}, 1.5};
    circulo_t circulo3 = {{-3, -3}, 3.0};

    punto_t punto1 = {4, 5};
    punto_t punto2 = {1, -3};
    punto_t punto3 = {-3, 1};
    punto_t punto4 = {1, 1};

    assert(estaEnRango(distanciaEntrePuntos(punto1, punto2), 8.544));
    assert(estaEnRango(distanciaEntrePuntos(punto2, punto3), 5.656));
    assert(estaEnRango(distanciaEntrePuntos(punto4, punto4), 0.0));

    assert(!estaDentro(circulo1, punto1));
    assert(!estaDentro(circulo1, punto2));
    assert(estaDentro(circulo1, punto4));

    assert(estaEnRango(calcularPerimetro(circulo1), 15.707));
    assert(estaEnRango(calcularPerimetro(circulo2), 9.424));
    assert(estaEnRango(calcularPerimetro(circulo3), 18.849));

    assert(estaEnRango(calcularArea(circulo1), 19.634));
    assert(estaEnRango(calcularArea(circulo2), 7.068));
    assert(estaEnRango(calcularArea(circulo3), 28.274));

    assert(estaEnRango(calcularDiametro(circulo1), 5.0));
    assert(estaEnRango(calcularDiametro(circulo2), 3.0));
    assert(estaEnRango(calcularDiametro(circulo3), 6.0));

    circulo_t c2 = moverCirculo(circulo1, punto2);
    assert(estaEnRango(c2.centro.x, punto2.x));
    assert(estaEnRango(c2.centro.y, punto2.y));

    c2 = moverCirculo(circulo2, punto3);
    assert(estaEnRango(c2.centro.x, punto3.x));
    assert(estaEnRango(c2.centro.y, punto3.y));

    c2 = moverCirculo(circulo3, punto4);
    assert(estaEnRango(c2.centro.x, punto4.x));
    assert(estaEnRango(c2.centro.y, punto4.y));

    return 0;
}

bool estaEnRango(double v1, double v2, double rango) {
    return fabs(v1 - v2) < rango;
}

bool estaDentro(circulo_t circulo, punto_t punto_1) {
    return distanciaEntrePuntos(circulo.centro, punto_1) < circulo.radio;
}

double distanciaEntrePuntos(punto_t p1, punto_t punto_2) {
    return sqrt(pow(p1.x - punto_2.x, 2) + pow(p1.y - punto_2.y, 2));
}

double calcularArea(circulo_t circulo) {
    return PI_t * pow(circulo.radio, 2);
}

double calcularPerimetro(circulo_t circulo) {
    return 2 * PI_t * circulo.radio;
}

double calcularDiametro(circulo_t circulo) {
    return 2 * circulo.radio;
}

circulo_t moverCirculo(circulo_t circulo, punto_t punto_1) {
    circulo.centro = punto_1;
    return circulo;
}
