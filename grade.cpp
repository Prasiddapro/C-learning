include <iostream>
using namespace std;

int main() {
    string name;
    int marks[5];
    int subjects;

    int total = 0;
    float percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter number of subjects (3 to 5): ";
    cin >> subjects;

    cout << "Enter marks:\n";

    for (int i = 0; i < subjects; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / (float)(subjects * 100)) * 100;

    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    // Grade logic
    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else if (percentage >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}