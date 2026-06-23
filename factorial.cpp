#include <iostream>
using namespace std;

int sum(int p) {
    if (p > 0) {
        return p * sum(p - 1);
    } else {
        return 1;
    }
}
int main() {
    int result = sum(20);
    cout << result;
    return 0;
}