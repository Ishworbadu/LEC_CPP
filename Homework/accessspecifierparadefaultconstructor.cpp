//program to define class,default constructor,access specifier,parameterized constructor
//method,etc.

#include <iostream>
using namespace std;

class MyClass  //MyClass is class name
 {  
private:    //private is access specifier
    int value;

public:     //public is access specifier 
    MyClass() {
        value = 0;  // Default constructor
    }

    MyClass(int num) {
        value = num;  // Parameterized constructor
    }

    void setValue(int num)   //setValue is method
    {
        value = num;
    }

    int getValue()       //getValue is method
    {
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
