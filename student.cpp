#include <iostream>
#include <vector>
#include <algorithm>

class Student {
public:
    std::string name;
    int rollNo;
    int marks;

    Student(const std::string& n, int roll, int m) : name(n), rollNo(roll), marks(m) {}
};

bool compareByMarks(const Student& s1, const Student& s2) {
    return s1.marks > s2.marks;  // Sort in descending order based on marks
}

int main() {
    // Create objects for 5 students
    Student student1("hari", 1, 80);
    Student student2("ram", 2, 92);
    Student student3("shiva", 3, 78);
    Student student4("rudra", 4, 85);
    Student student5("krishna", 5, 90);

    // Store the students in a vector
    std::vector<Student> students;
    students.push_back(student1);
    students.push_back(student2);
    students.push_back(student3);
    students.push_back(student4);
    students.push_back(student5);

    // Sort the students based on marks
    std::sort(students.begin(), students.end(), compareByMarks);

    // Print the students in descending order of marks
    std::cout << "Students sorted by highest marks:\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Roll No: " << student.rollNo
                  << ", Marks: " << student.marks << std::endl;
    }

    return 0;
}
