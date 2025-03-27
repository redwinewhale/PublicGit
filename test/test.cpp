#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int rotated[3][3]; 

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotated[j][2 - i] = matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}