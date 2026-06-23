#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double salary;

    try {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> salary;

        if (salary < 0) {
            throw "Salary cannot be negative!";
        }

        double bonus = salary * 0.10;
        double totalSalary = salary + bonus;

        cout << "\nEmployee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
    catch (const char* message) {
        cout << "Exception: " << message << endl;
    }

    return 0;
}