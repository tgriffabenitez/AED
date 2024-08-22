
#include <iostream>
#include <string>

using std::string;

typedef struct {
    double x, y;
} punto_t;

typedef struct {
    punto_t centro;
    double radio;
} circulo_t;

/**
 * @brief Genera un string con el código SVG de un circulo.
 * @param circulo Circulo a dibujar.
 * @return SVG del circulo.
 */
string dibujarCirculo(circulo_t circulo);

int main(void) {
    circulo_t circulo4 = {{100, 100}, 50};
    std::cout << dibujarCirculo(circulo4) << std::endl;
    return 0;
}

string dibujarCirculo(circulo_t circulo) {
    string svg = "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n";
    svg += "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n";
    svg += "<svg width=\"400\" height=\"400\" viewBox=\"0 0 400 400\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">\n";

    svg += "<circle cx=\"" + std::to_string(circulo.centro.x) + "\" cy=\"" + std::to_string(circulo.centro.y) +
           "\" r=\"" + std::to_string(circulo.radio) + "\" fill=\"orange\" />\n";

    svg += "</svg>";

    return svg;
}