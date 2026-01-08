#include <iostream>
using namespace std;

class Test {
    static int x;
public:
    static void show() {
        cout << "Value of x = " << x << endl;
    }
};

int Test::x = 10;

int main() {
    Test::show();
    return 0;
}
