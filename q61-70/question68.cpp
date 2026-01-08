#include <iostream>
using namespace std;

class A;

class B
{
private:
    int b;

public:
    void set(int x)
    {
        b = x;
    }
    friend void check(A, B);
};

class A
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    friend void check(A, B);
};

void check(A x, B y)
{
    if (x.a > y.b)
        cout << "A is bigger";
    else
        cout << "B is bigger";
}

int main()
{
    A a;
    B b;
    a.set(30);
    b.set(20);
    check(a, b);
    return 0;
}
