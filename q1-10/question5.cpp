#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float radius, height;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;

    cout << "volume of cylinder = " << PI * radius * radius * height << endl;

    return 0;
}
