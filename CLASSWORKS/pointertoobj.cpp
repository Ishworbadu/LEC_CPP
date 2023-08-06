//pointer to obj
#include <iostream>
using namespace std;

class employee
{
    private:
    char name[25];
    float salary;

    public:
    void getdata()
    {
        cout<<"\nenter name:";
        cin>>name;
        cout<<"enter salary:"<<endl;
        cin>>salary;

    }

    void showdata()
    {
        cout<<"\n name:"<<name<<endl;
        cout<<"salary:"<<salary;

    }

};

int main()
{
    employee *eptr;
    employee e;
    eptr=&e;
    eptr ->getdata();
    cout<<"\n accessing data through pointer variable";
    eptr ->showdata();
    return 0;
    
}   