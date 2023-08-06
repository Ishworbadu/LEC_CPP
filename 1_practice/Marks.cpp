#include <iostream>
using namespace std;

int main()
{
    int i, Eng, Com, Math, Sci, Nep, Total;
    int Student[5];
    for(i=0;i<=4;i++)
    {
        cout<<"Enter the marks in 5 subjects of "<<Student[i]<<endl;
        cin>>Eng;
        cin>>Com;
        cin>>Math;
        cin>>Sci;
        cin>>Nep;
    }

    for(i=0;i<=4;i++)
    {
        cout<<"Total marks is:"<<Eng+Com+Math+Sci+Nep<<endl;
    }
    return 0;

}