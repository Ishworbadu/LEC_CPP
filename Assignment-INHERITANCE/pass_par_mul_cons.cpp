 //passing parameters to multiple constructors

#include<iostream>
using namespace std;

class base_one
{
public:

base_one()
{

cout<<"no parameter constructor from base_one class";
}

base_one (int x)
{
cout<<"\nparameterized constructor from base_one_class"<<endl;
}
};
class base_two
{
public: 
base_two()
{
cout<<"\nno parameter constructor from base_two class";
}

base_two (int y)
{
cout<<"\nparameter constructor from base_two class"<<endl;
}
};

class derived:public base_one, public base_two
{
public:

derived ()
{
cout<<"\nno parameterized constructor from derived class"<<endl;
}

derived (int x, int y, int z):base_one (x), base_two(y)
{
cout<<"\nparameterized constructor from derived class"<<endl;
}

};
int main()
{
derived d1;
derived d(1,2,3);
}