#include<iostream>
using namespace std;

int main()
{
    int x=-2;
    cout<<"Before try\n";
    try{
        cout<<"Inside try\n";
        if (x<0){
            
            throw x;
            cout<<"After Throw\n";//?
        }
    }
    catch (int x){
        cout<<"Exception caught.Int type \n";
    }
    catch (float x){
        cout<<"Exception caught.Float type\n";

    }//if the data isnt int or float program terminates
    cout<<"After catch\n";
 return 0;
}