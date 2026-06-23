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

    Student student1, student2, student3, student4, student5;

    student1.name = "Prasidda";
    student1.rollNumber = 1;
    student1.marks = 90;

    student2.name = "Aarambha";
    student2.rollNumber = 2;
    student2.marks = 85;

    student3.name = "Aarav";
    student3.rollNumber = 3;
    student3.marks = 78;

    student4.name = "Bigyadip";
    student4.rollNumber = 4;
    student4.marks = 95;

    student5.name = "Alvin";
    student5.rollNumber = 5;
    student5.marks = 88;

    cout << "Name: " << student1.name << "\n";
    cout << "Roll Number: " << student1.rollNumber << "\n";
    cout << "Marks: " << student1.marks << "\n\n";

    cout << "Name: " << student2.name << "\n";
    cout << "Roll Number: " << student2.rollNumber << "\n";
    cout << "Marks: " << student2.marks << "\n\n";

    cout << "Name: " << student3.name << "\n";
    cout << "Roll Number: " << student3.rollNumber << "\n";
    cout << "Marks: " << student3.marks << "\n\n";

    cout << "Name: " << student4.name << "\n";
    cout << "Roll Number: " << student4.rollNumber << "\n";
    cout << "Marks: " << student4.marks << "\n\n";

    cout << "Name: " << student5.name << "\n";
    cout << "Roll Number: " << student5.rollNumber << "\n";
    cout << "Marks: " << student5.marks << "\n";

    return 0;
}