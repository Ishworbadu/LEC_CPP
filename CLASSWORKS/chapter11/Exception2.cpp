#include<iostream>
using namespace std;


int main()
{
    int a,b;
    cout<<"Enter values of a&b:";
    cin>>a>>b;
    int x =a-b;
    try{
        if (x!=0){
            cout<<"\n Result:"<<(a/(a-b));
        }else
     {
        throw (x);
     }
    }
    catch(int i)
    {
        cout<<"\nDivision by zero is not allowed\n";
    }
    cout<<"\nNext statement";
return 0;
}