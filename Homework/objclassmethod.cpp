#include <iostream>

using namespace std;

//class is user defined data type
//it can be defined as class class_name {body};

class classname
{
    public: // it is access specifier if public not written then automatic private is given by program
    string name;  // name is variable
    //int ; how to declare variable named class?
    int year; // year is integer type variable


    //method is any function inside class 

    void method() //here setdata is name of method defined 
    {
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"your name is "<<name<<endl<<endl;
        
        cout<<"enter year"<<endl;
        cin>>year;
        cout<<"the year is "<<year;
    }
};   //class is terminate by ; colon

classname object1; // classname's  object is created here

int main()
{
    object1.method();
    return 0;

}