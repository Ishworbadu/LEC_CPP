#include<iostream>
using namespace std;
int main()
{
    char oper;
    float num1, num2;
    cout<<"Enter the operator (+,-,*,/):"<<endl;
    cin>>oper;
    cout<<"Enter the two numbers:"<<endl;
    cin>> num1 >> num2 ;
    switch (oper)
    {
        case '+':
        cout<<"The sum is:"<< num1 + num2 ;
        break;
        case '-':
        cout<<"The difference is:"<< num1 - num2 ;
        break;
        case '*':
        cout<<"The multiplication is:"<< num1 * num2 ;
        break;
        case '/':
        cout<<"The division is :"<< num1 / num2 ;
        break;
        default :
        cout<<"Error! Entered operator is not valid."<<endl;
        break;
    }
    return 0;
}