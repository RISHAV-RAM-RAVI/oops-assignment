#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void display() {
        cout << "Class B\n";
    }
};

int main() {
    A* obj;
    B b;
    obj = &b;
    obj->display();
    return 0;
}
