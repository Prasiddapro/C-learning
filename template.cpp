#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T sub(T a, T b) {
    return a - b;
}

template <typename T>
T mul(T a, T b) {
    return a * b;
}

template <typename T>
T div(T a, T b) {
    return a / b;
}

int main() {
    cout << add<int>(5, 3) << "\n";
    cout << add<double>(2.5, 1.5) << "\n";
    cout << sub<float>(4.0, 2.0) << "\n";
    cout << mul<float>(5.0, 2.0) << "\n";
    cout << div<float>(100.0, 2.0) << "\n";
    return 0;
}