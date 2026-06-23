#include <iostream>
using namespace std;

class student {
public:
    string name;
    string grade;
    int roll;

    student(string x, string y, int z);
};

student::student(string x, string y, int z) {
    name = x;
    grade = y;
    roll = z;
}

int main() {

    student student1("Prasidda", "A", 28);

    cout << student1.name << " "
         << student1.grade << " "
         << student1.roll << "\n";

    return 0;
}