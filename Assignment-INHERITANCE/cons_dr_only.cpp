//constructor in derived class only
#include<iostream>
using namespace std;

class base
{

public:
   //body of base class

};

class derived : public base
{
    public:
       derived()
         {
            cout<<"default constructor from derived class";
         }
};

int main()
{
  derived d;
return 0;
}