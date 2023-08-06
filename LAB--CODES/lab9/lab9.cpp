#include <iostream>
using namespace std;
class Polygon {
protected:
    double length;
    double height;

public:
    Polygon(double l, double h) : length(l), height(h) {}
    virtual double Area() = 0; 
};

class Rectangle : public Polygon {
public:
    Rectangle(double l, double h) : Polygon(l, h) {}

    double Area() override {
        return length * height;
    }
};

class Triangle : public Polygon {
public:
    Triangle(double l, double h) : Polygon(l, h) {}

    double Area() override {
        return 0.5 * length * height;
    }
};

int main() {
    double length, height;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;
    Rectangle rectangle(length, height);
    std::cout << "Area of the rectangle: " << rectangle.Area() << std::endl;
    std::cout << "Enter the base length of the triangle: ";
    std::cin >> length;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    Triangle triangle(length, height);
    std::cout << "Area of the triangle: " << triangle.Area() << std::endl;

    return 0;
}
