#include <iostream>
using namespace std;
class student
{
    private:
     int roll;
     char name[20];
     char phone[10];
    
    public:
     void getdata()
     {
        cout<<"\nEnter Roll no: ";
        cin>>roll;
        cout<<"\nEnter Name: ";
        cin>>name;
        cout<<"\nEnter Phone No: ";
        cin>>phone;
     }
     void showdata()
     {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Phone No: "<<phone<<endl;
     }
};

int main()
{
    student s1 , s2;
    s1.getdata();
    s2.getdata();
    cout<<"First Student "<<endl;
    s1.showdata();
    cout<<"Seccond Student "<<endl;
    s2.showdata();

    return 0;
}