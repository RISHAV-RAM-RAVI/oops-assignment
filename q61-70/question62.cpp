// Program to differentiate local & member variables using this.
#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void set(int a)
    {
        this->a = a; // 'this->a' refers to member variable, 'a' refers to parameter
    }
    void show()
    {
        cout << a;
    }
};
int main()
{
    demo d;
    d.set(10);
    d.show();
    return 0;
}