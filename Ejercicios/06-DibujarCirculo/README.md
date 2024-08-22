# Dibujar un circulo en SVG

### Objetivo

El objetivo de este proyecto es dibujar un círculo utilizando las estructuras de datos `circulo_t` y `punto_t`, definidas en el trabajo practico.

## Funcion dibujarCirculo

La funcion dibujarCirculo recibe una estructura `circulo_t` y devuelve un `std::string` que representa el archivo SVG del circulo.

 Este `std::string` debe ser redirigido a un archivo SVG para su visualizacion en un navegador web.

```cpp
typedef struct {
    double x; // Coordenada X del punto
    double y; // Coordenada Y del punto
} punto_t;
```

```cpp
typedef struct {
    punto_t centro; // Centro del círculo
    double radio;   // Radio del círculo
} circulo_t;
```

```cpp
std::string dibujarCirculo(circulo_t circulo);
```

### Modo de Uso

1. Compilar el archivo `DibujarCirculo.cpp` con el siguiente comando:

    ```bash
    g++ DibujarCirculo.cpp -o dibujar --std=c++23
    ```

2. Ejecutar el archivo `dibujar` con el siguiente comando:

    ```bash
    ./dibujar > circulo.svg
    ```

3. Abrir el archivo `circulo.svg` en un navegador web.
