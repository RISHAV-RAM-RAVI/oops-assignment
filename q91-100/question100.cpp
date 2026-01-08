#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Square : public Shape {
public:
    void area() {
        int a = 5;
        cout << "Area = " << a * a;
    }
};

int main() {
    Shape* s;
    Square sq;
    s = &sq;
    s->area();
    return 0;
}
