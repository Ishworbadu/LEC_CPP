//an example of multipath inheritance



#include<iostream>
using namespace std;

class student
{
    protected:
     int studID;
     char name[25];
    public:
     void getstdata() 
     {
        cout<<"\nEnter Student ID: ";
        cin>>studID;
        cout<<"\nEnter name: ";
        cin>>name;
     }
     void showstdata()    
     {
        cout<<"\nStudent ID: "<<studID;
        cout<<"\nName: "<<name;
     }
};
class InternalExam:virtual public student
{
    protected:
        int marks1,marks2,marks3;
    public:
        void getdata()    
        {
            cout<<"Enter Internal marks in three subjects: ";
            cin>>marks1>>marks2>>marks3;
        }
        void showdata()
        {
            cout<<"\nInternal Marks in Subject 1: "<<marks1;
            cout<<"\nInternal Marks in Subject 2: "<<marks2;
            cout<<"\nInternal Marks in Subject 3: "<<marks3;
        }
        int totInternalMarks()
        {
            return (marks1+marks2+marks3);
        }
};
class ExternalExam:virtual public student
{
    protected:
           int marks1,marks2,marks3;
     public:
           void getdata()
           {
            cout<<"Enter External marks in three subjects: ";
            cin>>marks1>>marks2>>marks3;
           }
           void showdata()
           {
             cout<<"\nExternal Marks in Subject 1: "<<marks1;
             cout<<"\nExternal Marks in Subject 2; "<<marks2;
             cout<<"\nExternal Marks in Subject 3; "<<marks3;
           }
           int totExternalMarks()
           {
            return (marks1+marks2+marks3);
           }
};
class result:public InternalExam,public ExternalExam
{
    public:
        void getdata()
        {
            InternalExam::getdata();
            ExternalExam::getdata();
        }
        void showdata()
        {
            InternalExam::showdata();
            ExternalExam::showdata();
        }
        int TotalMarks()
        {
            return(totInternalMarks()+totExternalMarks());
        }
};
int main()
{
    result r;
    cout<<"Enter data for student"<<endl;
    r.getstdata();
    cout<<"\n Enter marks "<<endl;
    r.getdata();
    cout<<"\nData for the student is:"<<endl;
    r.showdata();
    cout<<"\ntotal Marks="<<r.TotalMarks();
    return 0;
}