#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}int main() {

    Calculator c;

    cout << "Enter first number: ";
    cin >> c.a;

    cout << "Enter second number: ";
    cin >> c.b;

    c.add();
    c.sub();
    c.mul();
    c.div();

    return 0;
}