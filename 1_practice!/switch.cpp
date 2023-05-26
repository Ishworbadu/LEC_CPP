#include<iostream>
using namespace std;

int main(){
char operation;
float num1;
float num2;

cout<<"enter operation(+,-):";
cin>>operation;
cout<<"enter two number";
cin>>num1>>num2;

switch (operation) {

    case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
    break;
    case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
    break;
    default:
    cout<<"Error!the operation isnot correct";
    return 0;
}



}