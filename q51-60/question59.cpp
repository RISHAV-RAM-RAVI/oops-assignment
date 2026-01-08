#include <iostream>
using namespace std;

class test
{
public:
    const int a;
    test(int x) : a(x)
    {
    }
};

int main()
{
    test t(10);
    cout << t.a;
    return 0;
}
