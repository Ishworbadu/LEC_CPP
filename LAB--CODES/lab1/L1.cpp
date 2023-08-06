
#include<iostream>
using namespace std;

#define PI 3.142

int main()

{ 
int deg; 
float rad; 
cout<<"Enter the value in degree:";
cin>>deg;
rad = PI * deg/180; 
cout<<"The angle in radian: "<<rad;  
return 0; 
}
