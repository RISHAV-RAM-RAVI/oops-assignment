#include <iostream>
using namespace std;

class add
{
public:
    int a, b;
    void sum()
    {
        cout << a + b;
    }
};

int main()
{
    add x;
    x.a = 10;
    x.b = 20;
    x.sum();
    return 0;
}
