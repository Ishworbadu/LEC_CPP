//program that increase base class data member and derive class data member
#include <iostream>
using namespace std;

class Base
{
private:
    int count;

public:
    Base()
    {
        count = 0;
    }

    void incr_count();
    void display();
};

void Base::incr_count()
{
    count++;
}

void Base::display()
{
    cout << "In Base:" << count << endl;
}

class Derived : public Base
{
private:
    int drv_count;

public:
    Derived()
    {
        drv_count = 0;
    }

    void incr_count();
    void display();
};

    void Derived::incr_count()
    {
        Base::incr_count();
        drv_count++;
    }
    void Derived::display()
    {
        Base::display();
        cout << "In Derived:" << drv_count << endl;
    }

    int main()
    {
        Derived d;
        d.incr_count();
        d.display();
        return 0;
    }
    