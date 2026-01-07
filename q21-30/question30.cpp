#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

start:
    cout << n << " ";
    n--;

    if (n > 0)
        goto start;

    return 0;
}
