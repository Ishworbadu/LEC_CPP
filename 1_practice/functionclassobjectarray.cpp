#include <iostream>

// Define a class named MyClass
class MyClass {
private:
  int data;

public:
  // Constructor
  MyClass(int value) {
    data = value;
  }

  // Function to display data
  void displayData() {
    std::cout << "Data: " << data << std::endl;
  }
};

int main() {
  const int ARRAY_SIZE = 5;
  MyClass objects[ARRAY_SIZE] = {MyClass(1), MyClass(2), MyClass(3), MyClass(4), MyClass(5)};

  // Display data using the objects array
  for (int i = 0; i < ARRAY_SIZE; i++) {
    objects[i].displayData();
  }

  return 0;
}
