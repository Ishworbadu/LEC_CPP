//pg.317
//constructor in multiply derived class
#include<iostream>
using namespace std; 
class base_one
{
 public:

    base_one()
    {
    cout<<" base one class constructor"<<endl;
    }
};
class base_two
{
 public:
    base_two ()
    {cout<<"base_two class constructor"<<endl;}

};
class derived: public base_two, public base_one
{
public:

    derived ()

    {
        cout<<"derived class constructor";
    }
};
int main()
{
    derived d;
    return 0;
}