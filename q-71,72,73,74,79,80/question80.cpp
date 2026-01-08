#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object Created\n";
    }
    ~Demo() {
        cout << "Object Deleted\n";
    }
};

int main() {
    Demo* d = new Demo();
    delete d;
    return 0;
}
