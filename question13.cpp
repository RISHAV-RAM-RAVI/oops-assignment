#include <iostream>
using namespace std;
int main()
{
    int x = 18, y = 20;
    cout << "Logical AND (x < 15 && y > 15): " << (x < 15 && y > 15) << endl;
    cout << "Logical OR (x < 15 || y < 15): " << (x < 15 || y < 15) << endl;
    cout << "Logical NOT (!(x < 15)): " << (!(x < 15)) << endl;

    return 0;
}