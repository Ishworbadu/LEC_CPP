#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Temperature Conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        double celsius_input;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius_input;
        cout << celsius_input << " Celsius is equal to " << (celsius_input * 9/5) + 32 << " Fahrenheit." << endl;
    } else if (choice == 2) {
        double fahrenheit_input;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit_input;
        cout << fahrenheit_input << " Fahrenheit is equal to " << (fahrenheit_input - 32) * 5/9 << " Celsius." << endl;
    } else {
        cout << "Invalid choice! Please choose 1 or 2." << endl;
    }

    return 0;
}
