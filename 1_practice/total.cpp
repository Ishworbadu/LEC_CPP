#include<iostream>
using namespace std;


int main() {
     int subject = 5;
    int marks[subject];
    int total = 0;


    for (int i = 0; i < 5 ; ++i) {
        std::cout << "Enter marks for subject " << i + 1 << ": ";
        std::cin >> marks[i];
        total += marks[i];
    }

    std::cout << "Total marks: " << total << std::endl;


    return 0;
}