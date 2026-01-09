#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Static";
    }
};

class B : public A {
public:
    void show() {
        cout << "Dynamic";
    }
};

int main() {
    A a;
    B b;
    a.show();
    b.show();
    return 0;
}
