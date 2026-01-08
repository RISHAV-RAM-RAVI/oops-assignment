#include <iostream>
using namespace std;

class num
{
public:
    int a;
};

int main()
{
    num n1, n2;
    n1.a = 10;
    n2.a = 20;

    if(n1.a > n2.a)
        cout << "n1 is greater";
    else
        cout << "n2 is greater";

    return 0;
}
