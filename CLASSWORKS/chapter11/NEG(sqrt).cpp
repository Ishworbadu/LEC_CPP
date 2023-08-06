#include<iostream>
#include<cmath>
using namespace std;

class Number
{
 private:
    double num;
 public:
    class NEG{};//exception class->has no body
    void readNum(){
        cout<<"Enter a number";
        cin>>num;
    }
    double sqroot(){
        if(num<0)
            throw NEG();
        else
        return sqrt(num);
    }
};

int main()
{
    Number n;
    double temp;
    n.readNum();
    try{
        cout<<"\nFinding square root";
        temp=n.sqroot();
        cout<<"\nSquare root is"<<temp<<endl;
        cout<<"\nSuccess";
        
    }
    catch(Number::NEG){
        cout<<"\nSquare root of -ve no. is imaginary";
    }
return 0;
}