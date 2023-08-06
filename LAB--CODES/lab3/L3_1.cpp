#include <iostream>

using namespace std;

int *roll=new int;
char *name=new char[15]l;

void scanRollandName()
{
    cout<<"enter name";
    cin>>name;
    cout<<"enter roll no";
    cin>>*roll;
    
}
void freeMemory()
{
    delete roll;
    delete[] name;

}


