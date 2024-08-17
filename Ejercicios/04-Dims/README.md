# Arreglos & Dimensiones - Total de Ventas

### Objetivo

-   Demostrar capacidad de construcción de tipos compuestos mediante la
    aplicación sucesiva de producto cartesiano.
-   Aplicación de ciclos for clásicos y for de intervalos (for-range).
-   Aplicación de redireccionamiento de los flujos estándar

### Problema

Esta es una serie de problemas que parten de una necesidad general: “Dado
los importes, mostrar las ventas totales”, y que después se particulariza en necesidades puntuales:

-   Necesidad #1: Dado los importes, mostrar ventas totales.
-   Necesidad #2: Dado los importes y meses (de 0 a 11), mostrar ventas totales
    por mes.
-   Necesidad #3: Dado los importes, meses, y números de los tres vendedores
    (0, 1, 2), mostrar total de ventas por mes y vendedor.
-   Necesidad #4: Dado los importes, meses, números de los tres vendedores, y
    números de las cuatro regiones (0, 1, 2, 4), mostrar total de ventas por mes,
    vendedor, y región.

### Restricciones

-   Se deben crear set de datos diferentes para cada solución.
-   Los datos deben extraerse de `cin`, no vienen en ningún orden.
-   Los importes son enteros y se deben enviar a `cout`.
-   Aplicar `std::array<T,N>` y no `T[N]`.
-   Aplicar operador `.at()` y no `[]`.
-   Cada solución debe estar en archivos separados.
