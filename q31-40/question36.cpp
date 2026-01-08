#include <iostream>
using namespace std;

int main() {
    int arrA[3][3], arrB[3][3], arrC[3][3];

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

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arrC[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }

    cout << "\nMultiplication of the matrix:\n\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arrC[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
