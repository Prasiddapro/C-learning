#include <iostream>
using namespace std;

template <typename T>
class Student {
public:
    T rollnumber;

    Student(T v) {
        rollnumber = v;
    }

    void show() {
        cout << "rollnumber: " << rollnumber << "\n";
    }
};

int main() {
    Student<int> intStudent(28);
    Student<string> strStudent("Twenty eight");
    intStudent.show();
    strStudent.show();
    return 0;
}