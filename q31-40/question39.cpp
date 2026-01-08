//Program to copy string manually. 
#include <iostream>
using namespace std;
int main()
{
    const int maxsize = 100;
    char str1[maxsize], str2[maxsize];
    cout << "Enter a string: ";
    cin.getline(str1, maxsize);

    // Copying str1 to str2
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Null-terminate str2

    cout << "The copied string is: " << str2 << endl;

    return 0;
}