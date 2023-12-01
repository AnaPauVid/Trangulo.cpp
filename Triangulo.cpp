#include "Triangulo.h"


Triangulo::Triangulo() {
    v1 = Point(0, 0);
    v2 = Point(50, 30);
    v3 = Point(25, 10);
}

Triangulo::Triangulo(Point _v1, Point _v2, Point _v3) {
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

Point Triangulo::getVertice1() {
    return v1;
}

Point Triangulo::getVertice2() {
    return v2;
}

Point Triangulo::getVertice3() {
    return v3;
}

void Triangulo::setVertice1(Point _v1) {
    v1 = _v1;
}

void Triangulo::setVertice2(Point _v2) {
    v2 = _v2;
}

void Triangulo::setVertice3(Point _v3) {
    v3 = _v3;
}

double Triangulo::perimetro() {
    return v2.calculaDistancia(v1) + v3.calculaDistancia(v2) + v1.calculaDistancia(v3);
}

double Triangulo::area() {
    return 0.5 * abs(((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + (v3.getX() * v1.getY())) -
                     ((v1.getX() * v3.getY()) + (v3.getX() * v2.getY()) + (v2.getX() * v1.getY())));
}


std::string Triangulo::str() {
    return v1.str() + ',' + v2.str() + ',' + v3.str();
}
