#include<iostream>
using namespace std;

class add{
    public:
   int a,b,c;
   void getdata(); 
   void displaydata();

};

int main()
{
    add a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3.getdata();
    a1.displaydata();
    a2.displaydata();
    a3.displaydata();
    return 0;
}


void getdata()
{
  int a,b,c;  
    cout<<"Enter any two numbers "<<endl;
    cin>>a>>b;
}

void displaydata()
{
   int a,b,c;
   c=a+b;
    cout<<"The sum is : "<<c<<endl;
}