#include <iostream>
using namespace std;

int main() {
    int a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";0000000000000000
    cin >> b;

    if (op == '+') {
        result = a + b;
        cout << "Result = " << result;
    }
    else if (op == '-') {
        result = a - b;
        cout << "Result = " << result;
    }
    else if (op == '*') {
        result = a * b;
        cout << "Result = " << result;
    }
    else if (op == '/') {
        if (b != 0) {
            result = a / b;
            cout << "Result = " << result;
        } else {
            cout << "Error: Division by zero!";
        }
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}