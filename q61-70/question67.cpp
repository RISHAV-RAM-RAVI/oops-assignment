#include <iostream>
using namespace std;

class complex
{
public:
    int r, i;
    complex(int x, int y)
    {
        r = x;
        i = y;
    }
    friend complex add(complex, complex);
};

complex add(complex a, complex b)
{
    return complex(a.r + b.r, a.i + b.i);
}

int main()
{
    complex c1(2, 3), c2(4, 5);
    complex c3 = add(c1, c2);
    cout << c3.r << " + " << c3.i << "i";
    return 0;
}
