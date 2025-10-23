#include "../include/Circle.hpp"
class 2DShape : public Shape{
};
class Circle : public 2DShape{
private: 
double x, y;
double r;
public: circle( double cx, double cy, double r):2DShape("Circle"), x(cx), y(xy), radius(r){}
double area(){
  return M_PI*r*r; }
double P(){
  return 2*M_PI_r;}
void display() const override {
        cout << "----- " << name << " -----" << endl;
        cout << "Center: (" << x << ", " << y << ")" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimetr": " << P() << endl;
    }
};
