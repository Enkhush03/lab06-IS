#include <iostream>
#include "include/Triangle.hpp"
#include "include/Circle.hpp"
#include "include/Square.hpp"
using namespace std;

int main() {
    Triangle t(0, 5, 4, "Equilateral Triangle");
    t.print();
    Circle c(0.0, 0.0, 5.0, "Circle ");
    c.display();
    Square s1(0, 10, 5.0);
    s1.print();
    return 0;
}
