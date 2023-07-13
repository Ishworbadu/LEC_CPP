// destructor in single inheritance

#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "base class constructor" << endl;
    }
    ~base()
    {
        cout << "base class destructor" << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "derived class constructor" << endl;
    }

    ~derived()
    {
        cout << "derived class destructor" << endl;
    }
};
int main()

{

    derived d;

    system("pause");
    return 0;
}