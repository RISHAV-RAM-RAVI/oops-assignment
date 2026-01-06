#include <iostream>
using namespace std;
int main()
{
    float principal, rate, time, si;

    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;

    si = (principal * rate * time) / 100;

    cout << "Simple Interest = " << si;

    return 0;
}
