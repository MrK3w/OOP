#ifndef PRGII_SHAPES_NONVIRTUAL_RECTANGLE_H
#define PRGII_SHAPES_NONVIRTUAL_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double bLength;
    double aLength;
public:
    Rectangle(double bLength, double aLength);

    double calculateArea();
    double calculatePerimeter();
};

#endif //PRGII_SHAPES_NONVIRTUAL_RECTANGLE_H