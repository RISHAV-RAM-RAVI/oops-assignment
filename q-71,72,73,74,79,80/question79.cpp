#include <iostream>
using namespace std;

class Info {
private:
    int secret;
public:
    void set(int x) {
        secret = x;
    }
    int get() {
        return secret;
    }
};

int main() {
    Info i;
    i.set(100);
    cout << i.get();
    return 0;
}
