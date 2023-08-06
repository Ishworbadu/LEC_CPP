#include <iostream>
using namespace std;

class ishwor
{
    private:
    int age=21;
    
    


    public:
    
    void showdata()
    {
    cout<<"ishwor badu's age is:"<<age;
    age=4;
    }

};


ishwor a;


int main()
{
a.showdata();
a.age=21;
return 0;
}
