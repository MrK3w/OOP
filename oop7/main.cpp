#include <iostream>
#include "Square.h"
#include "Rectangle.h"

int main() {
    auto square = new Square(5);
    auto rectangle = new Rectangle(5, 10);

    std::cout << square->calculateArea() << std::endl;
    std::cout << square->calculatePerimeter() << std::endl;

    std::cout << rectangle->calculateArea() << std::endl;
    std::cout << rectangle->calculatePerimeter() << std::endl;

    delete square;
    delete rectangle;
    return 0;
}