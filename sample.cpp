#include <iostream>
using namespace std;

class sample
{
   friend float mean (sample s);
   private:
   float num1,num2;
   public:
   void getdata()
    {
        float b,a;
        cout<<"input data"<<endl;
        cin>>a>>b;  
        num1=a;
        num2=b;

    }


};

float mean(sample s)//object as parameter
{
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}

int main()
{
    sample s;
    s.getdata();
    float result=mean(s);
    cout<<"mean"<<result<<endl;
    return 0;
}