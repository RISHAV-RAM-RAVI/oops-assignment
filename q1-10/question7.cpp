#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celcius;

    fahrenheit = (celcius * 1.8) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit<<"°F" << endl;

    return 0;
}
