#include <iostream>
using namespace std;

class outer
{
public:
    class inner
    {
    public:
        void show()
        {
            cout << "nested class";
        }
    };
};

int main()
{
    outer::inner i;
    i.show();
    return 0;
}
