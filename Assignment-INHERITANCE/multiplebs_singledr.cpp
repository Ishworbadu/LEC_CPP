//multiple constructor in base and single in derived class
#include<iostream>
using namespace std;

class base
{
public:
  base()
  {
    cout<<"default constructor from base class"<<endl;
  }
  base(int data)
  {
    cout<<"parameterized constructor from base class"<<endl;
  }

};

class derived:public base
{
    public:
        derived(int data)
        {
            cout<<"parameterized constructor from derived class";
        }
};

int main()
{
derived d(5);
return 0;
}