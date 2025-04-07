# 동적 메모리 할당
- 정적 메모리 할당
    >변수의 크기나 개수를 미리 정해서 사용하는 방식

- 동적 메모리 할당
    >프로그램이 실행 중에 메모리를 필요한 만큼 만들어서 쓰는 방식

# 동적 메모리 할당 방법
### 메모리를 할당(new)
```cpp
int *ptr = new int;        // 정수 1개를 위한 공간 할당(int의 크기만큼)
*ptr = 10;                 // 그 공간에 10을 저장
```
### 메모리를 반납(delete)
```cpp
delete ptr;          // 정수 1개짜리 메모리 반납
delete[] arr;        // 배열 메모리는 delete[] 로 반납
```
- new로 만든 건 꼭 delete로 반납 필수, 안 그러면 메모리 누수(memory leak)가 생김

# 배열 동적 할당 방법
### 1차원 배열 동적 할당
```cpp
int* arr = new int[size];

delete[] arr;
```
- 예시

```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "input arr size: ";
    cin >> size;

    // 동적 배열 할당
    int* arr = new int[size];

    // 값 입력받기
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "번째 숫자를 입력하세요: ";
        cin >> arr[i];
    }

    // 값 출력하기
    cout << "입력한 값들: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 메모리 해제
    delete[] arr;

    return 0;
}
```

### 다차원 배열 동적 할당
```cpp
int** arr = new int*[row];      // 먼저 "행" 개수만큼 포인터 배열 만들기
for (int i = 0; i < row; i++) {
    arr[i] = new int[col];      // 각 행에 "열" 개수만큼 정수 공간 할당
}
```
```cpp
for (int i = 0; i < row; i++) {
    delete[] arr[i];           // 각 행의 열 메모리 해제
}
delete[] arr;                  // 행 메모리 해제
```
- 예시

```cpp
#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "행(row)의 개수를 입력하세요: ";
    cin >> row;
    cout << "열(column)의 개수를 입력하세요: ";
    cin >> col;

    // 2차원 배열 동적 할당
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // 값 입력
    cout << row << "x" << col << " 배열의 값을 입력하세요:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // 값 출력
    cout << "입력한 배열 값:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 메모리 해제
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
```