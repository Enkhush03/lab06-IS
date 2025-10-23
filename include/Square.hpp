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
    // Constructor
    Square(float topLeftX, float topLeftY, float s, string n = "Square")
        : TwoDShape(n), side(s), x1(topLeftX), y1(topLeftY)
    {
        calcVertices();
    }

    // Бусад оройг тооцох функц
    void calcVertices() {
        x2 = x1 + side; y2 = y1;          // Дээд баруун
        x3 = x2;       y3 = y1 - side;    // Доод баруун
        x4 = x1;       y4 = y3;           // Доод зүүн
    }

    // Талбай
    float getArea() const {
        return side * side;
    }

    // Периметр
    float getPerimeter() const {
        return 4 * side;
    }

    // Setter & Getter
    void setSide(float s) { side = s; calcVertices(); }
    float getSide() const { return side; }

    // Хэвлэх функц
    void print() const {
        cout << "Square Name: " << name << endl;
        cout << "Vertices: (" << x1 << "," << y1 << "), ("<< x2 << "," << y2 << "), ("<< x3 << "," << y3 << "), ("<< x4 << "," << y4 << ")" << endl;
        cout << "Side: " << side << endl;
        cout << "Area: " << getArea() << ", Perimeter: " << getPerimeter() << endl;
    }
};

#endif
