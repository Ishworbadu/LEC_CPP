#include <iostream>
using namespace std;

namespace BEI
{
char subject[20] = "Electronics";
int room = 401;
void printSubject()
{
cout<<subject<<endl;
}

void printRoom()
{
    cout<<room<<endl;
}
}
namespace BCT
{
char subject[30] = "Software Engineering";
int labRoom = 401;
void printSubject()
{
cout<<subject<<endl;
}
void printLabRoom()
{
cout<<labRoom<<endl;
}
}
int main()
{
using namespace BEI;
using namespace BCT;
printLabRoom();
printRoom();
BEI::printSubject();
BCT::printSubject();
return 0;
}
