#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    void add() {
        cout << "Addition = " << a + b << endl;
    }

    void sub();
    void mul();
    void divide();
};

void Calculator::sub() {
    cout << "Subtraction = " << a - b << endl;
}

void Calculator::mul() {
    cout << "Multiplication = " << a * b << endl;
}

void Calculator::divide() {
    if (b != 0)
        cout << "Division = " << a / b << endl;
    else
        cout << "Cannot divide by zero" << endl;
}

int main() {
    Calculator c;

    cout << "Enter first number: ";
    cin >> c.a;

    cout << "Enter second number: ";
    cin >> c.b;

    c.add();
    c.sub();
    c.mul();
    c.divide();

    return 0;
}