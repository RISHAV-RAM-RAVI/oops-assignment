#include <iostream>
using namespace std;

class area
{
public:
    int r;
    void circle()
    {
        cout << 3.14 * r * r;
    }
};

int main()
{
    area a;
    a.r = 5;
    a.circle();
    return 0;
}
