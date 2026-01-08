#include <iostream>
using namespace std;

int main() {
    int arrA[3][3], arrB[3][3];

    cout << "Enter the elements for matrix A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arrA[i][j];
        }
    }

    cout << "Enter the elements for matrix B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arrB[i][j];
        }
    }

    cout << "Sum of Matrix A and B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arrA[i][j] + arrB[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
