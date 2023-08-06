#include <iostream>
using namespace std;
class base
{
    protected:
    int num;
    public:
    void readdata()
    {
        cout<<"enter number in base:";
    }
    void showdata()
    {
        cout<<"number in base="<<num<<endl;

    }
};

class derived:public base
{
    private:
    int num;
    public:
    void readdata()
    {
        cout<<"enter number in derived:";
        cin>>num;
    }
    void showdata()
    {
        cout<<"number in derived class="<<num<<endl;
    }

};

int main()
{
    derived d1;
    d1.readdata();
    d1.showdata();
    system("pause");
    return 0;
}