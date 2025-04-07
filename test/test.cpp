#include <iostream>
using namespace std;

int** deleteColumn(int** arr, int rows, int cols, int del_col);
int** insertColumn(int** arr, int rows, int cols, int insert_col, int default_value = 0);

void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 4;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j + 1;
        }
    }

    cout << "원본 배열:\n";
    printArray(arr, rows, cols);

    // 열 추가 (2번 열 위치에 기본값 99 삽입)
    int insert_index = 2;
    arr = insertColumn(arr, rows, cols, insert_index, 99);
    cols++;

    cout << "\n열 " << insert_index << "번에 추가 후:\n";
    printArray(arr, rows, cols);

    // 열 삭제 (1번 열 삭제)
    int delete_index = 1;
    arr = deleteColumn(arr, rows, cols, delete_index);
    cols--;

    cout << "\n열 " << delete_index << "번 삭제 후:\n";
    printArray(arr, rows, cols);

    // 메모리 해제
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}

int** insertColumn(int** arr, int rows, int cols, int insert_col, int default_value = 0) {
    if (insert_col < 0 || insert_col > cols) {
        cout << "삽입할 열 인덱스가 범위를 벗어났습니다.\n";
        return arr;
    }

    int** new_arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        new_arr[i] = new int[cols + 1];
        int col_idx = 0;
        for (int j = 0; j < cols + 1; j++) {
            if (j == insert_col) {
                new_arr[i][j] = default_value;  // 새 열 기본값
            } else {
                new_arr[i][j] = arr[i][col_idx++];
            }
        }
    }

    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return new_arr;
}

int** deleteColumn(int** arr, int rows, int cols, int del_col) {
    if (del_col < 0 || del_col >= cols) {
        cout << "삭제할 열 인덱스가 범위를 벗어났습니다.\n";
        return arr;
    }

    int** new_arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        new_arr[i] = new int[cols - 1];
        int col_idx = 0;
        for (int j = 0; j < cols; j++) {
            if (j == del_col) continue;
            new_arr[i][col_idx++] = arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return new_arr;
}
