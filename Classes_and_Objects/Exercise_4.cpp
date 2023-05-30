#include <iostream>
using namespace std;
class student
{
    private:
     int roll;
     char name[20];
     char phone[10];

    public:
     void getdata();
     void showdata();
};

void student :: getdata()
{
    cout<<"\nEnter Roll No: ";
    cin>>roll;
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter Phone No: ";
    cin>>phone;
}

void student :: showdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Phone Number: "<<endl;
}

int main()
{
    student s1 , s2;
    s1.getdata();
    s2.getdata();
    cout<<"First Student "<<endl;
    s1.showdata();
    cout<<"Second Student "<<endl;
    s2.showdata();
    return 0;
}