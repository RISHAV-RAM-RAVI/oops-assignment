#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void fun() {
        cout << "Derived";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->fun();
    return 0;
}
