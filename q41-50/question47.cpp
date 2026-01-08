#include <iostream>
using namespace std;

class big
{
public:
    int a, b;
    void check()
    {
        if(a > b)
            cout << a << " is bigger";
        else
            cout << b << " is bigger";
    }
};

int main()
{
    big x;
    x.a = 15;
    x.b = 25;
    x.check();
    return 0;
}
