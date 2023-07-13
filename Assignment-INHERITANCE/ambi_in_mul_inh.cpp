//program to show ambiguity in multiple inheritance
#include<iostream>
using namespace std;

class student
{
protected:
char name[25];
int rollno,age;

public:
void getdata();
void display();

};

void student::getdata()
{
    cout<<"ENter name:";
    cin>>name;
    cout<<"Enter roll no";
    cin>>rollno;
    cout<<"Enter age";
    cin>>age;

}

void student::display()
{
    cout<<"\nName:"<<name<<endl;
    cout<<"\nRoll No:"<<rollno<<endl;
    cout<<"\nAge:"<<age<<endl;
}

class employee
{
    protected:
    char name[25];
    float salary;
    int age;
    public:
    void getdata();
    void display();
};

void employee::getdata()
{
    cout<<"\nEnter name";
    cin>>name;
    cout<<"Enter salary:";
    cin>>salary;
    cout<<"Enter age:";
    cin>>age;
}


void employee::display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Salary"<<salary<<endl;
    cout<<"Age"<<age<<endl;
}

class manager:public student,employee
{
    private:

    char qualification[10];

    public:

    void getdata();
    void display();
};

void manager::getdata()
{
    student::getdata();
    cout<<"Salary";
    cin>>salary;
}

void manager::display()
{
    student::display();
    cout<<"Salary:"<<salary;
}


int main()
{
manager m;
cout<<"Enter data on employee: ";
m.getdata();
cout<<"Entered data on employee are: ";
m.display();
return 0;
}