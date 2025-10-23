#ifndef Triangle_hpp
#define Triangle_hpp
#include<iostream>
#include<cmath>
#include "2DShape.hpp"
using namespace std;

class Triangle : public TwoDShape {
private:
    float side;
    float x1, y1;     // top vertex
    float x2, y2;     // bottom left
    float x3, y3;     // bottom right
    float perimeter;

public:
    Triangle(float x, float y, float s, string n);

    void calVertices();
    float calArea();
    void calPerimeter();
    void print();
};

#endif
