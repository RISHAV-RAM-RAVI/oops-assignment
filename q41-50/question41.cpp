#include <iostream>
using namespace std;

class test
{
public:
    int a;
};

int main()
{
    test t;
    t.a = 10;
    cout << t.a;
    return 0;
}
