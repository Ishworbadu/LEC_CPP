#include<iostream>
using namespace std;
const int size=10;
class Array
{
private:
    int arr[10];
public:
    class lowRange{};
    class highRange{};
    int & operator[](int i){
        if(i<0)
            throw lowRange();
        else if (i>=10)
            throw highRange();
         return arr[i];       
    }

};

int main()
{
    Array a1;
    int index;
    try{
        cout<<"Enter array index";
        cin>>index;
        a1[index]=10;
        cout<<index<<" is within range";
    }
    catch(...){
        cout<<"Exception out of range";
    }
 return 0;
}
