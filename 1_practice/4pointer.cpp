#include <iostream>
using namespace std;

// Namespace ne

namespace n1{
    int x=2;

    // function to display the message for namespace n1

    void fun()
    {
         cout<< "this is fun() of n1"
        <<endl;

    }
}

//namespace n2
namespace n2{
    int x=5;

    //function to display the message for namespace n2

void fun()
{
    cout <<"this is fun() of n2"
    << endl;

}
}
int main()
{
    //the methods and variables callle using scope resolution(::)

    cout<< n1::x<<endl;
    //function call
    n1::fun();
    cout<<n2::x <<endl;

    //function call
    n2::fun();
    return 0;
}