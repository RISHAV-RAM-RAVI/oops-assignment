#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
};

int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
