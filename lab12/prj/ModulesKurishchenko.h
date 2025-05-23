#ifndef MODULESKURISHCHENKO_H
#define MODULESKURISHCHENKO_H

#include <cmath>

class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double getRadius();
    double getHeight();
    void setRadius(double);
    void setHeight(double);
    double getLateralSurfaceArea();
};

double Cylinder::getRadius(){ return radius; }
double Cylinder::getHeight(){ return height; }

void Cylinder::setRadius(double r){ radius = r; }
void Cylinder::setHeight(double h){ height = h; }

double Cylinder::getLateralSurfaceArea(){ return 2 * M_PI * radius * height; }

#endif // MODULESKURISHCHENKO_H
