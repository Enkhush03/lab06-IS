#include "../include/Square.hpp"


Square::Square(float topLeftX, float topLeftY, float s, const string& n)
    : TwoDShape(n), side(s), x1(topLeftX), y1(topLeftY) {
    calcVertices();
    calculate();
}

void Square::calcVertices() {
    x2 = x1 + side; y2 = y1;          // Дээд баруун
    x3 = x2;       y3 = y1 - side;    // Доод баруун
    x4 = x1;       y4 = y3;           // Доод зүүн
}

void Square::calculate() {
    area = side * side;
    perimeter = 4 * side;
}

void Square::print() const {
    cout << name <<  endl;
    cout << "Vertices: (" << x1 << "," << y1 << "), ("<< x2 << "," << y2 << "), ("
         << x3 << "," << y3 << "), ("<< x4 << "," << y4 << ")" << endl;
    cout << "Side: " << side << endl;
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
}
