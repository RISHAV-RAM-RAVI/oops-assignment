#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class\n";
    }
};

class B : private A {
public:
    void display() {
        show();
    }
};

int main() {
    B obj;
    obj.display();
    return 0;
}
