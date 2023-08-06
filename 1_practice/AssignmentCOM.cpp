#include<iostream>
using namespace std;
class calculate                //Creating class
{
    public:
    int a,b;
    calculate()                //default constructor
    {
        cout<<"Enter first number :"<<endl;
        cin>>a;
        cout<<"Enter second number :"<<endl;
        cin>>b;
    }
    calculate(int c, int d)       //parameterized constructor
    {
        c=a;
        d=b;
        cout<<"The numbers are :"<<c<<"and"<<d<<endl;
    }
    void addition()                 //member function
    {
        cout<<"The addition of two given numbers is :"<<(a+b)<<endl;
    }
};
void nonmembfun()                  //Non member function
{
    cout<<"This is non member funtion ."<<endl;
}
int main()
{
    calculate c1;
    c1.addition();
    nonmembfun();
    return 0;
}