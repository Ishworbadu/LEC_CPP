#include <iostream>
using namespace std;

class Vehicle
{
    private:
    int platenumber;

    public:
    Vehicle(int pnum)
    int getnumber(){

        cout<<"enter no of scooter";
        cin>>platenumber;
        return platenumber;

    }

};

int main()
{
    Vehicle scooter;
    cout<<scooter.getnumber();
    return 0;


}