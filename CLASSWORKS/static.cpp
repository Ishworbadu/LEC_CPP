#include "iostream"
using namespace std;

void display()
{
     static int  i = 5;
     i = i+1;
    cout<<i;
}

int main()
{
   display();
   display();

    
    return 0;
}




