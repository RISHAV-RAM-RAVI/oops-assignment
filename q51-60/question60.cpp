#include <iostream>
using namespace std;
class demo
{
public:
    static int a;
    void show()
    {
        cout << a;
    }
};
int demo::a = 10; //static data member initialization
int main()
{
    demo d;
    d.show();
    return 0;
}