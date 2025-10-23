#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
using namespace std;

class Shape {
protected:
    string name; // бүх дүрсийн нэр
public:
    Shape(string n = "Shape") : name(n) {}
    virtual float area() const = 0;      // талбай
    virtual float perimeter() const = 0; // периметр
    string getName() const { return name; }
    virtual ~Shape() {}
};

#endif
