#include "include/Triangle.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(float x, float y, float s, string n) {
    x1 = x;
    y1 = y;
    side = s;
    name = n;

    calVertices();
    area = calArea();
    calPerimeter();
    print();
}

void Triangle::calVertices() {
    float h = (sqrt(3) / 2) * side;
    x2 = x1 - (side / 2);
    y2 = y1 - h;
    x3 = x1 + (side / 2);
    y3 = y1 - h;
}

float Triangle::calArea() {
    return (sqrt(3) / 4) * pow(side, 2);
}

void Triangle::calPerimeter() {
    perimeter = 3 * side;
}

void Triangle::print() {
    cout << "Shape: " << name << endl;
    cout << "Vertices:\n";
    cout << "  A(" << x1 << ", " << y1 << ")\n";
    cout << "  B(" << x2 << ", " << y2 << ")\n";
    cout << "  C(" << x3 << ", " << y3 << ")\n";
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}
