#include <iostream>
#include <string>

using namespace std;

int &GetMaxElement(int (&arr)[5], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return arr[max_index];
}

int main() {
    int arr[] = {3, 8, 2, 10, 5};
    GetMaxElement(arr, 5) = 99;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}