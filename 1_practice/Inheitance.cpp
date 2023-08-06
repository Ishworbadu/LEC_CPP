#include <iostream>
using namespace std;

class Account{
    public:
         float salary = 10000;

}; // Base class

class Programmer: public Account {
    public:
    float bonus = 5000;

}; // Derived class 

innt main(void) {
    Programmer p1;
    Account a1;
    cout<< "Salary:" <<p1.salary; <<endl;
    cout<< "Salary:" <<a1.salary; <<endl;
    cout<< "Bonus:" <<p1.bonus; <<endl;

    return 0;
}