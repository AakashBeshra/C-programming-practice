// Write a C++ program for multiplication of two matrices
#include <iostream>
using namespace std;

void multiplyMatrices(int A[][3], int B[][3], int C[][3], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> m >> n;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> p;

    if (n != p) {
        cout << "Matrices cannot be multiplied. Columns of the first matrix must match rows of the second matrix." << endl;
        return 0;
    }

    int A[3][3], B[3][3], C[3][3] = {0};

    cout << "Enter elements of the first matrix (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of the second matrix (" << n << "x" << p << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    multiplyMatrices(A, B, C, m, n, p);

    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
