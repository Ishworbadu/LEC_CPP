#include <iostream>
using namespace std;

class student
{
    protected:
    string name;
    int roll;

    public:
    void studentinfo()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter rollno";
        cin>>roll;

    }

class test:public student
{
    protected:
    float marks1,marks2,marks3;
    public:
    void ipmarks()
    {
        cout<<"enter marks for 1";
        cin>>marks1;
        cout<<"enter marks for 2";
        cin>> marks2;
        cout<<"enter marks for 3";
        cin>>marks3;


    }


};

class result: public test
{
    public:
    void calculatemarks()
    {
        float totalmarks=marks1+marks2+marks3;
        cout<<"total marks:"<<totalmarks<<endl;

    }
    void displayresult()
    {
        cout<<"student name "<<name<<endl;
        cout<<"roll no"<<roll<<endl;
        cout<<"marks in test1"<<marks1<<endl;
    }
}

}
class test
{

}
class result
{

}
