#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.bark();
    myDog.eat();
    return 0;
}
