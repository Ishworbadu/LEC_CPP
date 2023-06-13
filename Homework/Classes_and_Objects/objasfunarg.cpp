#include <iostream>
using namespace std;

class Student {
public:
    double marks;

    Student() {
        cout << "Enter the marks: ";
        cin >> marks;
    }
};

double calcAvg(Student s1, Student s2) {
    double avg = (s1.marks + s2.marks) / 2;
    return avg;
}

int main() {
    Student s1, s2;
    double avg = calcAvg(s1, s2);

    cout << "The average is " << avg << endl;
    return 0;
}