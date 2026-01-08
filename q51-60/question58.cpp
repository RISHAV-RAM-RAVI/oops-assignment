#include <iostream>
using namespace std;

class demo
{
public:
    int *p;
    demo()
    {
        p = new int;
        *p = 10;
    }
    void show()
    {
        cout << *p;
    }
};

int main()
{
    demo d;
    d.show();
    return 0;
}
