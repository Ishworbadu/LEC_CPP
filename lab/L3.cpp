#include <iostream>
using namespace std;

void calcArea(int a, int b, int c)
{
    int area = a * b * c;
    cout << "area of cube" << area << endl;
}

void calcArea(float radius)
{
    float pi = 3.14;
    float area = pi * radius * radius;
    cout << " area  circle: " << area << endl;
}

void calcArea(float length, float breadth)
{
    float area = length * breadth;
    cout << "area rectangle: " << area << endl;
}

int main()
{
    int a, b, c;
    cout << "enter side of cube ";
    cin >> a >> b >> c;
    calcArea(a, b, c);

    float radius;
    cout << "enter radius circle: ";
    cin >> radius;
    calcArea(radius);

    float length, breadth;
    cout << "enter side of rectangle ";
    cin >> length >> breadth;
    calcArea(length, breadth);

    return 0;
}
