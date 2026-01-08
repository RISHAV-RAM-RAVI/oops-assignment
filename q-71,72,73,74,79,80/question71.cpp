#include <iostream>
using namespace std;

class Demo
{
    static int count;

public:
    Demo()
    {
        count++;
    }
    void show()
    {
        cout << "Object Count = " << count << endl;
    }
};

int Demo::count = 0;

int main()
{
    Demo a, b, c;
    a.show();
    return 0;
}
