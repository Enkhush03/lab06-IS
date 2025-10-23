#include "../include/Circle.hpp"

Circle::Circle(double cx, double cy, double r, string n)
    : TwoDShape(n), x(cx), y(cy), radius(r) {
    calculate();  // Эхэндээ талбай, периметрийг тооцоолно
}

void Circle::calculate() {
    area = M_PI * radius * radius;
    perimeter = 2 * M_PI * radius;
}

void Circle::display() const {
    cout  << name << endl;
    cout << "Center: (" << x << ", " << y << ")" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}
