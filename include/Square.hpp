#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "2DShape.hpp"
#include <iostream>
using namespace std;

class Square : public TwoDShape {
private:
    float side;
    float x1, y1; // Дээд зүүн орой
    float x2, y2; // Дээд баруун
    float x3, y3; // Доод баруун
    float x4, y4; // Доод зүүн
public:
    Square(float topLeftX, float topLeftY, float s, const string& n = "Square");
    void calcVertices();        // бусад оройг тооцох
    void calculate();           // area болон perimeter-г тооцох
    void print() const;         // мэдээллийг хэвлэх
};
#endif
