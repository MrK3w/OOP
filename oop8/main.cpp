#include <iostream>
#include <vector>
#include "RectangularShape.h"
#include "Square.h"
#include "Rectangle.h"

int main() {
    auto * square = new Square(5);
    auto * rectangle = new Rectangle(5, 10);

    std::vector<RectangularShape*> shapes;
    shapes.emplace_back(square);
    shapes.emplace_back(rectangle);

    for(auto shape: shapes)
    {
        std::cout << shape->calculateArea() << std::endl;
        std::cout << shape->calculatePerimeter() << std::endl << std::endl;
    }

    return 0;
}