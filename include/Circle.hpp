#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "2DShape.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class Circle : public TwoDShape {
private:
    double x, y;    // Төвийн координат
    double radius;  // Радиус
public:
    Circle(double cx, double cy, double r, string n = "Circle");
    void calculate();          // area болон perimeter-г тооцох
    void display() const;      // мэдээллийг хэвлэх
};

#endif

