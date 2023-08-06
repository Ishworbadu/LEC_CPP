#include <iostream>
using namespace std;

class student
{
    private:
    int age;
    string name;

    public:
    void getinfo()
    {
        cin>>age;
        cin>>name;
    }

    void showinfo()
    {
        cout<<age;
        cout<<name;
    }






};

int main()
{ 
    student obj1[5];
    int i;
    for(i=0;i<5;i++)
    {
        obj1[i].getinfo();

    }
    
    for(i=0;i<5;i++)
    {
        obj1[i].showinfo();
    }

   


    return 0;
}