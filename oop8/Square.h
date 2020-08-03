#ifndef PRGII_SHAPES_SQUARE_H
#define PRGII_SHAPES_SQUARE_H

#include "RectangularShape.h"

class Square : public RectangularShape {
private:
    double sideLength;
public:
    explicit Square(double sideLength);

    double calculateArea();
    double calculatePerimeter();
};

#endif //PRGII_SHAPES_SQUARE_H