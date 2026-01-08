#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base Class\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived Class\n";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
