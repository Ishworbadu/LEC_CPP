#include <iostream>
using namespace std;

class opoverloading
{
private:
    int a, b, c;

public:
    opoverloading(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) 
    {

    }

    opoverloading operator-()
    {
        return opoverloading(-a, -b, -c);
    }

    void showdata()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main()
{
    opoverloading obj1(2, 3, 4);
    obj1 = -obj1;
    obj1.showdata();

    return 0;
}
