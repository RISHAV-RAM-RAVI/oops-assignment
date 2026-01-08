#include <iostream>
using namespace std;

class emp
{
public:
    int id;
    long long salary;
    string name;
    string dept;
};

int main()
{
    emp e;
    e.id = 151;
    e.salary = 2500000;
    e.name = "Rishav";
    e.dept = "IT";
    cout << "id"<< "  "<< "salary"<< "  "<< "name"<< "  "<< "dept" << endl;
    cout << e.id << " " << e.salary << " " << e.name << " " << e.dept;
    return 0;
}
