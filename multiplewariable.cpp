#include <iostream>
#include <string>
using namespace std;


void myFunction(string name, int age, int rollNumber) {

    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "Roll Number: " << rollNumber << endl;
    
}

int main() {

    myFunction("Liam", 23, 101);

    myFunction("Jenny", 19, 102);

    myFunction("Anja", 30, 103);

    return 0;
}