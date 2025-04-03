# 레퍼런스

- 원본 변수와 동일한 메모리 주소를 공유하는 별칭

### 레퍼런스 기본 문법

```cpp
int a = 10;      // a라는 변수 선언
int& ref = a;    // ref는 a의 레퍼런스 (a의 또 다른 이름)

cout << ref << endl;  // 10 (a와 같은 값)
ref = 20;  // ref를 변경하면 a도 20으로 변경됨
cout << a << endl;  // 20 (a도 바뀜)
```

# 레퍼런스와 일반 변수의 차이

```cpp
int a = 10;
int b = a;  // 새로운 변수 b를 만들어서 a의 값을 복사함
b = 20;

cout << "a: " << a << endl; // 10
cout << "b: " << b << endl; // 20
```

```cpp
int a = 10;
int& ref = a;  // ref는 a의 별명 (동일한 메모리 사용)
ref = 20;

cout << "a: " << a << endl; // 20
cout << "ref: " << ref << endl; // 20
```

# 레퍼런스의 특징

- 초기화할 때 반드시 원본 변수가 필요

```cpp
int& ref;  // 오류 (레퍼런스는 반드시 초기화해야 함)
```

- 한 번 연결되면 다른 변수로 변경할 수 없음

```cpp
int a = 10, b = 20;
int& ref = a;
ref = b;  // ref가 b를 가리키는 게 아님! (a의 값이 20으로 바뀜)
```

- NULL을 가리킬 수 없음 (포인터와의 차이점)

```cpp
int& ref = nullptr;  // 오류 (레퍼런스는 NULL을 가리킬 수 없음)
```

- 레퍼런스의 주소는 원본 변수와 같음

```cpp
int a = 10;
int& ref = a;

cout << &a << endl;   // 0x1234 (메모리 주소 예시)
cout << &ref << endl; // 0x1234 (a와 동일한 주소)
```
# 배열 참조
```cpp
void modifyArray(int (&arr)[5]) { // 배열을 참조자로 받음
    arr[0] = 99;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    modifyArray(arr);
    cout << arr[0] << endl;
    return 0;
}
```

# 함수에서 레퍼런스 활용

```cpp
void changeValue(int& x) {
    x = 100; // x는 원본 변수를 가리킴
}

int main() {
    int a = 10;
    changeValue(a);
    cout << a << endl; // 100 (원본 값이 변경됨)
}
```

# 함수 반환값으로 레퍼런스 사용

```cpp
int& getRef(int& num) {
    num += 10;
    return num;
}

int main() {
    int a = 5;
    int& ref = getRef(a);
    std::cout << ref << std::endl; // 15
}
```

- 지역 변수의 레퍼런스를 반환하면 오류가 발생

```cpp
int& wrongFunction() {
    int local = 10;
    return local; // 오류 (지역 변수는 함수가 끝나면 사라짐)
}
```

# const 레퍼런스

```cpp
void show(const int& num) { // num을 수정할 수 없음
    cout << num << endl;
}

int main() {
    int a = 10;
    show(a); // 10 출력
}
```

# 참조 순회(string 참고)

- int &n : arr
    >배열 원소를 참조로 가져옴

| 특징                   | 레퍼런스 (&)    | 포인터 (*)         |
| ---------------------- | --------------- | ------------------ |
| 선언 방법              | int& ref = a;   | int* ptr = &a;     |
| 메모리 주소 저장       | (불가능)        | (가능)             |
| nullptr 할당 가능 여부 | (불가능)        | (가능)             |
| 한 번 연결 후 변경     | (불가능)        | (가능)             |
| 간접 접근 방식         | ref (그냥 사용) | *ptr (역참조 필요) |

