#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        int salary = 150000;
        string name = "Prasidda";

        if (salary >= 20000) {
            cout << "Employee Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        } else {
            throw salary;
        }
    }
    catch (int myNum) {
        cout << "Salary is less than 20000." << endl;
    }

    return 0;
}