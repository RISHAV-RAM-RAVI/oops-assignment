#include <iostream>
using namespace std;

class test
{
public:
    test()
    {
        cout << "constructor\n";
    }
    ~test()
    {
        cout << "destructor";
    }
};

int main()
{
    test t;
    return 0;
}
