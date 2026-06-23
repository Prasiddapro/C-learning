#include <iostream>  
using namespace std;

class science {
public:
    void display() {
        cout << "This is the Science base " << endl;
    }
};

class math : public science {
public:
    void show() {
        cout << "This is the Maths derived class" << endl;
    }
};

int main() {
    math obj;         
    obj.display();     
    obj.show();        
    return 0;
}