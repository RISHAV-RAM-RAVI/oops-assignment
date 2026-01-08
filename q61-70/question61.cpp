// Program demonstrating this pointer
#include <iostream>
using namespace std;
class Sample
{
    int x; 
    public:
    void setX(int x) 
    {
        this->x = x; 
    }
    void display()
    {
        cout << "Value of x: " << x << endl;
    }
};
int main()
{
    Sample obj;
    obj.setX(42);  
    obj.display(); 
    return 0;
}
