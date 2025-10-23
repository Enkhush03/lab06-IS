#ifndef TWODSHAPE_HPP
#define TWODSHAPE_HPP

#include "Shape.hpp"

class TwoDShape : public Shape {
public:
    TwoDShape(string n = "2DShape") : Shape(n) {}
    virtual void print() const = 0; // дүрсний мэдээлэл хэвлэх
};

#endif
