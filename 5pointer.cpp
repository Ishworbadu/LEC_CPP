#include <iostream>
using namespace std;

class student{
  
  public:
  double marks;
  //constuctor to initialize marks
  student(double m)
  {
    marks=m;

  }
};
// we are making function which takes object as an argument
// class->2student,student haru ko average marks

void calculateaverage(student s1,student s2)
{
    double average=(s1.marks+s2.marks) /2;
    cout << "the average marks of two student is "<<average<<endl;

    
}
int main()
{
    student student1(100.0), student2(200.5);

    calculateaverage(student1,student2);
    return 0;
    
}