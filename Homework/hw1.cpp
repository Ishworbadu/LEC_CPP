#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass() {
        value = 0;  // Default constructor
    }

    MyClass(int num) {
        value = num;  // Parameterized constructor
    }

    void setValue(int num) {
        value = num;
    }

    int getValue() {
        return value;
    }
};

void printValue(MyClass obj) {
    cout << "Value: " << obj.getValue() << endl;
}

int main() {
    MyClass obj1;  // Object using default constructor
    cout << "Default Constructor: ";
    printValue(obj1);

    MyClass obj2(5);  // Object using parameterized constructor
    cout << "Parameterized Constructor: ";
    printValue(obj2);

    obj1.setValue(10);  // Using object method
    cout << "Updated Value: ";
    printValue(obj1);

    return 0;
}
