#include "Rectangle.h"

Rectangle::Rectangle(double bLength, double aLength) : bLength(bLength), aLength(aLength) {

}

double Rectangle::calculateArea() {
    return aLength * bLength;
}

double Rectangle::calculatePerimeter() {
    return 2*aLength + 2*bLength;
}
