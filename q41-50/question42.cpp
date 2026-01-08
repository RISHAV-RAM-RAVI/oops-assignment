#include <iostream>
using namespace std;

class sample
{
private:
    int a;

public:
    void set()
    {
        a = 5;
    }
    void show()
    {
        cout << a;
    }
};

int main()
{
    sample s;
    s.set();
    s.show();
    return 0;
}
