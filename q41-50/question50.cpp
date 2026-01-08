#include <iostream>
using namespace std;

class count
{
public:
    static int c;
    count()
    {
        c++;
    }
};

int count::c = 0;

int main()
{
    count a, b, d, e, f;
    cout << count::c;
    return 0;
}
