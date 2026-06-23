#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int marks;
};

int main() {
    Student student1;

    student1.name = "Prasidda";
    student1.rollNumber = 28;
    student1.marks = 92;

    cout << "Name: " << student1.name << "\n";
    cout << "Roll Number: " << student1.rollNumber << "\n";
    cout << "Marks: " << student1.marks << "\n";

    return 0;

}