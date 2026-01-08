//Program using structure to store student details.
#include <iostream>
using namespace std;
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    Student student;

    cout << "Enter student ID: ";
    cin >> student.id;
    cin.ignore(); // To ignore the newline character after integer input

    cout << "Enter student name: ";
    cin.getline(student.name, 50);

    cout << "Enter student marks: ";
    cin >> student.marks;

    cout << "\nStudent Details:\n";
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}