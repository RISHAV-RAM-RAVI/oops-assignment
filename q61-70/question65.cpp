#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void set()
    {
        a = 5;
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
    a.set();
    b.show(a);
    return 0;
}
