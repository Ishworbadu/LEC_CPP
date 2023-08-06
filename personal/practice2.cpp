#include <iostream>
using namespace std;


class constructor   
{
    private:
    int n;

    public:
    
    constructor(int a)
    {
        n=a;
        cout<<"the value of a is:"<<a;
    }


};

int main()
{
constructor obj;

return 0;

}


