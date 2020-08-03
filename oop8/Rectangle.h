#ifndef PRGII_SHAPES_RECTANGLE_H
#define PRGII_SHAPES_RECTANGLE_H

#include "RectangularShape.h"

class Rectangle : public RectangularShape {
private:
    double aLength;
    double bLength;
public:
    Rectangle(double aLength, double bLength);

    double calculateArea();
    double calculatePerimeter();
};

#endif //PRGII_SHAPES_RECTANGLE_H