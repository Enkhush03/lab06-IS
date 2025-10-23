#ifndef TWODSHAPE_HPP
#define TWODSHAPE_HPP
#include "Shape.hpp"

class TwoDShape : public Shape {
protected:
    float area;
    float perimeter;
public:
    TwoDShape(string n = "2D Shape") : Shape(n) {}
    float getArea() { return area; }
    float getPerimeter() { return perimeter; }
};

#endif
