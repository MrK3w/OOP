#include "Rectangle.h"

Rectangle::Rectangle(double aLength, double bLength) : aLength(aLength), bLength(bLength) {

}

double Rectangle::calculateArea() {
    return aLength * bLength;
}

double Rectangle::calculatePerimeter() {
    return (2 * aLength) + (2 * bLength);
}