#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n = "Shape") {
        name = n;
    }
    void setName(string n) { name = n; }
    string getName() { return name; }
};

#endif
