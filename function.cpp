#include <iostream>
using namespace std;


void add(int a, int b, int c) {
    int sum = a + b + c;

    cout << "Sum of the function is: " << sum << endl;
}


void subtract(int a, int b, int c) {
    int sub = a - b - c;

    cout << "Subtraction of the function is: " << sub << endl;
}

int main() {

    
    add(3, 4, 9);

    
    subtract(10, 3, 2);

    return 0;
}