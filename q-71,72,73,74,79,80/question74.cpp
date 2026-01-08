#include <iostream>
using namespace std;

class Data {
    int x;
public:
    Data(int a) {
        x = a;
    }
    int get() const {
        return x;
    }
};

int main() {
    Data d(5);
    cout << d.get();
    return 0;
}
