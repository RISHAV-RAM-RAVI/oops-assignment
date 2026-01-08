#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void getRoll() {
        cin >> roll;
    }
};

class Marks : public Student {
public:
    int m1, m2;
    void getMarks() {
        cin >> m1 >> m2;
    }
};

class Result : public Marks {
public:
    void show() {
        cout << "Roll: " << roll << endl;
        cout << "Total: " << m1 + m2;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.show();
    return 0;
}
