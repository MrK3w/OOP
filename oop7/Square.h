#ifndef PRGII_SHAPES_NONVIRTUAL_SQUARE_H
#define PRGII_SHAPES_NONVIRTUAL_SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
    double sideLength;
public:
    Square(double sideLength);

    double calculateArea();
    double calculatePerimeter();
};

#endif //PRGII_SHAPES_NONVIRTUAL_SQUARE_H