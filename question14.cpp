#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    cout << " values before assignment operators: a = " << a << ", b = " << b << endl;

    a += b; // a = a + b
    cout << "After a += b, a = " << a << endl;

    a -= b; // a = a - b
    cout << "After a -= b, a = " << a << endl;

    a *= b; // a = a * b
    cout << "After a *= b, a = " << a << endl;

    a /= b; // a = a / b
    cout << "After a /= b, a = " << a << endl;

    a %= b; // a = a % b
    cout << "After a %= b, a = " << a << endl;

    return 0;
}