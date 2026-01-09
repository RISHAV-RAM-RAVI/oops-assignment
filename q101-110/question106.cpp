#include <iostream>
using namespace std;

class A {
public:
    virtual void print() {
        cout << "A";
    }
};

class B : public A {
public:
    void print() {
        cout << "B";
    }
};

int main() {
    A* a;
    B b;
    a = &b;
    a->print();
    return 0;
}
