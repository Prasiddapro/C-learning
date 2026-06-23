#include <iostream>
using namespace std;
 
int main() {
    int marks;
    char grade;

    cout << "Enter the marks (0 to 100): ";
    cin >> marks;

    if (marks >=90)
       grade = 'A';
    else if (marks >= 80)
       grade = 'B';
    else if (marks >= 70)
       grade = 'C';
    else if (marks >= 60)   
       grade = 'D';
    else 
       grade= 'F' ;

    switch (grade) {
        case 'A':50
            cout << "Excellent! Grade A" << endl;
            break;

        case 'B':
            cout << "Very Good! Grade B" << endl;
            break;

        case 'C':
            cout << "Good! Grade C" << endl;
            break;

        case 'D':
            cout << "Pass! Grade D" << endl;
            break;

        case 'F':
            cout << "Fail! Grade F" << endl;
            break;

        default:
            cout << "Invalid grade!" << endl;
    }

    return 0;
}



  
