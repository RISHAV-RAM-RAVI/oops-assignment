#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog";
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}
