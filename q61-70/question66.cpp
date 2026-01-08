#include <iostream>
using namespace std;

class num
{
public:
    int a;
    num(int x)
    {
        a = x;
    }
    friend num operator+(num, num);
};

num operator+(num x, num y)
{
    num t(0);
    t.a = x.a + y.a;
    return t;
}

int main()
{
    num n1(10), n2(20);
    num n3 = n1 + n2;
    cout << n3.a;
    return 0;
}
