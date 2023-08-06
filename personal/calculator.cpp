#include <iostream>
using namespace std;
void calculator();

void calculator()
{
    float a,b;
    cin>>a;
    cin>>b;
    float sum;
    sum=a+b;
    float multiplication;
    multiplication=a*b;
    float divide;
    divide=a/b;
    float subtract=a-b;
    cout<<sum<<endl;
    cout<<multiplication<<endl;
    cout<<divide<<endl;
    cout<<subtract<<endl;

}


int main()
{

    calculator();
    return 0;


}

