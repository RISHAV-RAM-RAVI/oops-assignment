#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    friend void swap(A &, B &);
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
    friend void swap(A &, B &);
};

void swap(A &x, B &y)
{

    cout << "Before swapping: A.a = " << x.a << ", B.b = " << y.b << endl;
    int t;
    t = x.a;
    x.a = y.b;
    y.b = t;
    cout << "After swapping: A.a = " << x.a << ", B.b = " << y.b << endl;
}

int main()
{
    A a;
    B b;
    a.set(10);
    b.set(20);
    swap(a, b);
    return 0;
}
