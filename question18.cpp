//Program to evaluate an algebraic expression. 
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, c = 15;
    int result = a + b * c - (a + b);
    cout << "The result of the expression a + b * c - (a + b) is: " << result << endl;

    return 0;
}