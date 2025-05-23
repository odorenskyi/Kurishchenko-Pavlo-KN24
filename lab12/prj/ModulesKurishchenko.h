#ifndef MODULESKURISHCHENKO_H
#define MODULESKURISHCHENKO_H

#include <cmath>

class ClassLab12_Kurishchenko {
private:
    double radius;
    double height;

public:
    ClassLab12_Kurishchenko(double r, double h) : radius(r), height(h) {}
    double getRadius();
    double getHeight();
    void setRadius(double);
    void setHeight(double);
    double getLateralSurfaceArea();
};

double ClassLab12_Kurishchenko::getRadius(){ return radius; }
double ClassLab12_Kurishchenko::getHeight(){ return height; }

void ClassLab12_Kurishchenko::setRadius(double r){ radius = r; }
void ClassLab12_Kurishchenko::setHeight(double h){ height = h; }

double ClassLab12_Kurishchenko::getLateralSurfaceArea(){ return 2 * M_PI * radius * height; }

#endif // MODULESKURISHCHENKO_H
