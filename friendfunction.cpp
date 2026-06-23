#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() { length = 15; }

    friend void printLength(Box);
};

void printLength(Box obj) {
    cout << "length: " << obj.length << endl;
}

int main() {
    Box obj;
    printLength(obj);
    return 0;
}