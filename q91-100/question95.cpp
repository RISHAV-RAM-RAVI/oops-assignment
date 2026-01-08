#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    void getId() {
        cin >> id;
    }
};

class Salary : public Employee {
public:
    int basic;
    void getSalary() {
        cin >> basic;
    }
};

class Payroll : public Salary {
public:
    void show() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << basic;
    }
};

int main() {
    Payroll p;
    p.getId();
    p.getSalary();
    p.show();
    return 0;
}
