#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int result = (a*a) + (2*a*b) + (b*b);//calculate (a + b)²
    cout << "Result: " << result;
    return 0;
}
