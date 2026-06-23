
#include <iostream>
using namespace std;

class School {
private:
    int monthlyFee;

public:
    void setFee(int f) {
        monthlyFee = f;
    }

    int getFee () {
        return monthlyFee;
    }
};

int main () {

    School student;

    student.setFee(2500);

    cout << "Monthly Fee: " << student.getFee() << endl;

    return 0;
}