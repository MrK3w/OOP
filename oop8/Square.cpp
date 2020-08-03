#include "Square.h"

Square::Square(double sideLength) : sideLength(sideLength){

}

double Square::calculateArea() {
    return sideLength * sideLength;
}

double Square::calculatePerimeter() {
    return 4 * sideLength;
}