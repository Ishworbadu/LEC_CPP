#include <iostream>
using namespace std;

class Room {
    public:

    int length;
    int breadth;
    int height;
    
    double calculateArea() {
        return length*breadth ;
    }

    double calculateVolume() {
        return length * breadth * height ;
    }
};

int main() {
    Room obj401;
    obj401.length = 5;
    obj401.breadth = 10;
    obj401.height = 5;

    //Calculate the area and volume and show the results
    cout<<"The area of the room is:"<<obj401.calculateArea()<<endl;
    cout<<"The volume of the room is:"<<obj401.calculateVolume()<<endl;
}