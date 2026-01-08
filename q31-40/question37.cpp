#include <iostream>
using namespace std;
int main()
{
    const int maxsize = 100;
    char str[maxsize];
    cout << "Enter a string: ";
    cin.getline(str, maxsize);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    cout << "The length of the string is: " << length << endl;

    return 0;
}