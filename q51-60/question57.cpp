#include <iostream>
using namespace std;

class one
{
public:
    one()
    {
        cout << "one\n";
    }
};

class two : public one
{
public:
    two()
    {
        cout << "two";
    }
};

int main()
{
    two t;
    return 0;
}
