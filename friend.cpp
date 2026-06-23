#include <iostream>
#include <string>
using namespace std;

class StudentAccount {
private:
    int salary;

public:
    string name;

    void deposit(int amount) {
        salary = amount;
    }

    void showSalary() {
        cout << "Salary: " << salary << endl;
    }

    friend void revealSalary(StudentAccount acc);
};

void revealSalary(StudentAccount acc) {
    cout << "Friend func salary peek: " << acc.salary << endl;
}

int main() {
    StudentAccount account;

    account.deposit(5000000);
    account.showSalary();

    account.name = "Aarambha";
    cout << "Name: " << account.name << "\n";

    revealSalary(account);

    return 0;
}