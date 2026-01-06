#include <iostream>
using namespace std;

int main()
{
    int a = 77, b = 54;

    cout << "Before swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
