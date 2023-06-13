//this pointer


#include <iostream>
using namespace std;

class mobile
{
    private:
    int m=10;

    public:
    void display()
    {
        cout<<"the value of m is"<<m<<endl;
        cout<<"the value of what is "<<this->m<<endl;
        cout<<"the address of current obj is "<<this<<endl;

    }

    
};

int main()
{
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0;
}