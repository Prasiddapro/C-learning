#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

class Cow : public Animal {
  public:
    void animalSound() {
      cout << "TheCow    says: mow \n";
    }
};

class Lion : public Animal {
  public:
    void animalSound() {
      cout << "TheLion    says: RAWR \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  Cow myCow;
  Lion myLion;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  myCow.animalSound();
  myLion.animalSound();
  return 0;
}