#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string books[100];
    string search;

    cout << "Enter number of books: ";
    cin >> n;

    cout << "Enter book names:\n";
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    cout << "\nAvailable Books:\n";
    for (int i = 0; i < n; i++) {
        cout << books[i] << endl;
    }

    cout << "\nEnter book to search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (books[i] == search) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Book is available" << endl;
    else
        cout << "Book not found" << endl;

    return 0;
}