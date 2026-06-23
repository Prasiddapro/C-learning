#include <iostream>
#include <string>
using namespace std;

int main() {
    string food[5] = {"pizza", "burger", "hotwings", "fries", "chicken"};

    cout << "Forward Order:\n";
    for (int i = 0; i < 5; i++) {
        cout << food[i] << "\n";
        
    }

    cout << "\nReverse Order:\n";
    for (int i = 4; i >= 0; i--) {
        cout << food [i] << "\n";

    }

          return 0;

  }