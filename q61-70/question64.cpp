#include <iostream>
using namespace std;

class B; // Forward declaration is written in below code

class A
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    friend void add(A, B);
};


class B
{
private:
    int b;

public:
    void set(int x)
    {
        b = x;
    }
    friend void add(A, B);
};

void add(A x, B y)
{
    cout << x.a + y.b;
}

int main()
{
    A a;
    B b;
    a.set(110);
    b.set(20);
    add(a, b);
    return 0;
}
