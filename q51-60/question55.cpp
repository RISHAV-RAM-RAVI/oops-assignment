#include <iostream>
using namespace std;

class cal
{
public:
    cal()
    {
        cout << "no value\n";
    }
    cal(int a)
    {
        cout << a;
    }
};

int main()
{
    cal c1;
    cal c2(5);
    return 0;
}
