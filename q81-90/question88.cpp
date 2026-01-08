#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
};

class Derived : public Base {
public:
    void show() {
        cout << "x = " << x;
    }
};

int main() {
    Derived obj;
    obj.show();
    return 0;
}
