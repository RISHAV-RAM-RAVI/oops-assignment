//Program Using conditional (ternary) operator.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Using conditional (ternary) operator to check if the number is even or odd
    string result = (num % 2 == 0) ? "even" : "odd";

    cout << "The number " << num << " is " << result << "." << endl;

    return 0;
}