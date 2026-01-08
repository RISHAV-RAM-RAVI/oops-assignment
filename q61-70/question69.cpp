#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    A()
    {
        a = 10;
    }
    friend class B;
};

class B
{
public:
    void show(A x)
    {
        cout << x.a;
    }
};

int main()
{
    A a;
    B b;
    b.show(a);
    return 0;
}
