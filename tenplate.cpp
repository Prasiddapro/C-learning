#include <iostream>
using namespace std;

template <typename T>   
T bigger(T a, T b) {
    return (a > b) ;
}

int main() {
    cout << bigger(10, 20) << endl;

    cout << bigger(5.5, 2.3) << endl;

    cout << bigger('A', 'Z') << endl;

    return 0;
}