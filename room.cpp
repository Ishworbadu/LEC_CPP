

#include <iostream>


using namespace std;

class room { 
    public:
 int length;
 int breadth;
 int height;

  
 
 double calculatearea()
 {
    cout <<"enter length and breadth";
   cin >>length;
   cin>> breadth;
   
    return breadth * length; 

 }
 double calculatevolume()
 {   cout<<"enter length and breadth and height";
     cin>>length;
     cin>>breadth;
     cin>>height;

   
   
    return length * breadth  * height;

 }

};


int main()
{
   room a,v;


    cout<<"the area of the room is " <<a.calculatearea() <<endl;
    cout<<"the volm is " << v.calculatevolume();



}
