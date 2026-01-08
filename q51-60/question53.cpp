#include <iostream>
using namespace std;

class test
{
public:
    test()
    {
        cout << "default\n";
    }
    test(int a)
    {
        cout << a;
    }
};

int main()
{
    test t1;
    test t2(10);
    return 0;
}
