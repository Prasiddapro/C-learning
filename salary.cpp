#include <iostream>
using namespace std;

class Employee {
public:
    string name;   

private:
    int salary;    

public:
    void showSalary(int s) {
        salary = s;
    }

    void showData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {

    Employee emp1;

    emp1.name = "Prasidda";

    emp1.showSalary(1000000);

    emp1.showData();

    return 0;
}