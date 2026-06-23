#include <iostream>
using namespace std;

class MyCar {
  public:
   
    int speed(int maxSpeed) {
        return maxSpeed;
    }

    void myMethod() {
      
        cout << speed(200) << endl;
    }
};

int main() {
  MyCar myObj; 
  myObj.speed(200); 
  myObj.myMethod();
  return 0;
}