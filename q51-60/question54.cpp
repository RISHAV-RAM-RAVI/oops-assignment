#include <iostream>
using namespace std;

class copyy
{
public:
    int a;
    copyy(int x)
    {
        a = x;
    }
    copyy(copyy &o)
    {
        a = o.a;
    }
};

int main()
{
    copyy c1(10);
    copyy c2(c1);
    cout << c2.a;
    return 0;
}
