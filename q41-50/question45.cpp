#include <iostream>
using namespace std;

class cal
{
public:
    int a, b;
    void add()
    {
        cout << a + b << endl;
    }
    void sub()
    {
        cout << a - b << endl;
    }
};

int main()
{
    cal c;
    c.a = 20;
    c.b = 10;
    c.add();
    c.sub();
    return 0;
}
