#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "2DShape.hpp"
#include <cmath>

class Triangle : public TwoDShape {
private:
    float side;
    float x1, y1;   // дээд оройн координат
    float x2, y2;   // зүүн доод
    float x3, y3;   // баруун доод

public:
    Triangle(float x, float y, float s, string n = "Triangle");

    void calcVertices();
    void calcArea();
    void calcPerimeter();
    void print();
};

#endif
