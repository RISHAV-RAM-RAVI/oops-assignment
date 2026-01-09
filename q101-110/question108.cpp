#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    Base* arr[2];
    Base b;
    Derived d;

    arr[0] = &b;
    arr[1] = &d;

    arr[0]->show();
    arr[1]->show();
    return 0;
}
