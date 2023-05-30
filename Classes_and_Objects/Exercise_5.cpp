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
inline void student :: getdata()
{
    cout<<"\nEnter Roll No: ";
    cin>>roll;
    cout<<"\nEnter Name: ";
    cin>>name;
    cout<<"\nEnter Phone Number: ";
    cin>>phone;
}
inline void student :: showdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Phone No: "<<phone<<endl;
}
