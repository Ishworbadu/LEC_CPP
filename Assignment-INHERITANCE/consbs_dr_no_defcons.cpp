//constructor in base and derived classes
//without default constructor
#include<iostream>
using namespace std; 
class base
{
 public:

    base (int data)
    {
    cout<<"\nParameterized constructor from base class"<<endl;
    }
};
class derived: public base
{
 public:
//if :base (data) isnt given it generates error because there will be non-existing constructor in base class
//so we call parameterized constructor explicitly by derived class constructor through member initialization list
    derived (int data):base (data)
    {   
    cout<<"\nParameterized constructor from derived class";
    }
};

int main()
{
    derived d(5);
 return 0;
}