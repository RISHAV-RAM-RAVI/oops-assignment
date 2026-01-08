#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Demo d;
    cout << d.add(2, 3) << endl;
    cout << d.add(2.5f, 3.5f);
    return 0;
}
