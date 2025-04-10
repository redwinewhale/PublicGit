# 일차원 배열 선언 방법

```cpp
int arr1[5];              
// 선언만 하고 초기화 X (쓰레기 값 저장됨)
int arr2[5] = {1, 2, 3};   
// 나머지 요소는 0으로 자동 초기화 -> {1, 2, 3, 0, 0}
int arr3[] = {10, 20, 30, 40}; 
// 크기 생략 가능 (자동으로 4로 설정됨)
```

# 다차원 배열

### 다차원 배열 구조

```cpp
[0][0]  [0][1]  [0][2]  [0][3]  [0][4]
[1][0]  [1][1]  [1][2]  [1][3]  [1][4]
[2][0]  [2][1]  [2][2]  [2][3]  [2][4]
```

### 다차원 배열 선언 방법

```cpp
int matrix[3][3] = { 
    {1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9} 
};

int matrix2[2][3] = {1, 2, 3, 4, 5, 6}; 
// 위와 같음: { {1, 2, 3}, {4, 5, 6} }

int array[3][5] = {
    { 1, 2 },          // row 0 = 1,  2,  0,  0,  0
    { 6, 7, 8 },       // row 1 = 6,  7,  8,  0,  0
    { 11, 12, 13, 14 } // row 2 = 11, 12, 13, 14, 0
};

int array[][5] = {
    { 1, 2, 3, 4, 5 },
    { 6, 7, 8, 9, 10 },
    { 11, 12, 13, 14, 15 }
};
// 왼쪽 첨자(괄호) 생략 가능

int array[3][5] = { 0 }; // 0으로 초기화
```

- 3차원 배열부터는 값을 넣을 때 반복문 이용이 편리

# 배열의 활용
### 배열 위치 변환

- swap() 사용
```cpp
 swap(arr[i], arr[i + 1]);
 ```

### 배열의 크기 구하기

- sizeof() 사용

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int size = sizeof(arr) / sizeof(arr[0]);  
// 전체 크기 ÷ 한 요소 크기
```

### 배열 요소 접근

- 배열이름[index][index]

```cpp
int arr[5] = {10, 20, 30, 40, 50};
cout << arr[0] << endl;  // 10
cout << arr[4] << endl;  // 50
```

# 문자열 입력

### cin 사용(공백 미포함)

```cpp
int main() {
    char str[20];
    cout << "문자열 입력: ";
    cin >> str;
    cout << "입력된 문자열: " << str << endl;
}
```

### cin.get(str, num) 사용(공백 포함)

```cpp
int main() {
    char str[20];
    cout << "문자열 입력: ";
    cin.get(str, 20);  // 최대 19글자 + 마지막 '\0' (널 문자)
    cout << "입력된 문자열: " << str << endl;
    return 0;
}
```

### cin.getline(str, num) 사용(공백 포함)

```cpp
int main() {
    char str[20];
    cout << "문자열 입력: ";
    cin.getline(str, 20);  // 최대 20글자
    cout << "입력된 문자열: " << str << endl;
    return 0;
}
```

### getline(cin, str)

```cpp
int main() {
    int num;
    cin << num;
    cin.ignore();  // 입력 버퍼에 남아있는 개행 문자 제거
    
    string str;
    getline(str, 20);
    cout << str;
    return 0;
}
