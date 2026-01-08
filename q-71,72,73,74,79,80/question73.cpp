#include <iostream>
using namespace std;

class Sample {
public:
    void show() const {
        cout << "Constant object calling function" << endl;
    }
};

int main() {
    const Sample s;
    s.show();
    return 0;
}
