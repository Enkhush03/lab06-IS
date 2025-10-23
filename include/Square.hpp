#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
    double side;

public:
    Square(double s);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif

