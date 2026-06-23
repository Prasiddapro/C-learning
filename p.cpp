#include <iostream>
using namespace std;

int main() {
   const float PI= 3.14;
   float radius, area,  l, b, perimeter;
   
     
   cout << "Enter radius:";
   cin >> radius;
   cout << "Enter the length of the rectangle:";
   cin >> l;
   cout << "Enter the breadth of the rectangle:";
   cin >> b;

   perimeter = 2*PI * radius;
   area = l*b;
   cout << "Area of rectangle: " << area <<endl;
   cout << "perimeter of circle: " <<perimeter <<endl;


return 0;
}