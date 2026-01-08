#include <iostream>
using namespace std;

class A {
public:
    ~A() {
        cout << "Destructor A\n";
    }
};

class B : public A {
public:
    ~B() {
        cout << "Destructor B\n";
    }
};

int main() {
    B obj;
    return 0;
}
