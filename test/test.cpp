#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += matrix[0][j];
    }

    for (int i = 1; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    int diagonal1 = 0, diagonal2 = 0;
    for (int i = 0; i < 3; i++) {
        diagonal1 += matrix[i][i];
        diagonal2 += matrix[i][2 - i];
    }

    if (diagonal1 != sum || diagonal2 != sum) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}
