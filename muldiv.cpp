#include <iostream>
using namespace std;


void calculate(int a, int b, int &multiplication, float &division)
{
    multiplication = a * b;                  
    division = static_cast<float>(a) / b;  
}

int main()
{
    int num1 = 24;
    int num2 = 8;

    int mulResult = 0;
    float divResult = 0.0f;

    calculate(num1, num2, mulResult, divResult);

    cout << "Multiplication = " << mulResult << endl;
    cout << "Division = " << divResult << endl;

    return 0;
}