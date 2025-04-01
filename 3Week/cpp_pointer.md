# 포인터의 기본 개념
- 메모리 주소를 저장하는 변수
    >메모리 주소는 다른 변수나 배열, 객체 등의 위치를 가리킴

# 포인터 선언
- 데이터 타입 뒤에 *를 붙여서 선언

```cpp
int x = 10;
int* ptr = &x; // ptr은 x의 메모리 주소를 가리키는 포인터
```

# 주소 연산자 (&)와 역참조 연산자 (*)

- 주소 연산자 (&): 변수가 저장된 메모리 주소를 가져옴
- 역참조 연산자 (*): 포인터가 가리키는 주소에 저장된 값을 참조

```cpp
int x = 5;
int* ptr = &x; // ptr은 x의 주소를 저장

cout << *ptr; // 포인터가 가리키는 주소의 값, 즉 5 출력
```

# 포인터의 초기화

```cpp
int* ptr = nullptr; // 초기화된 포인터
```
- nullptr은 특수한 포인터 상수로, "아무것도 가리키지 않음"을 나타냄

# 포인터와 배열

- 배열의 이름은 배열의 첫 번째 원소의 주소를 가리키는 포인터처럼 동작

```cpp
int arr[] = {1, 2, 3};
int* ptr = arr; // arr은 첫 번째 원소의 주소를 가리킴
cout << *ptr; // 1 출력 (arr[0]과 동일)
```

# 포인터 연산
- 포인터는 메모리 주소를 다루므로, 주소 연산을 통해 포인터 간의 계산이 가능

```cpp
int arr[] = {10, 20, 30};
int* ptr = arr;

cout << *(ptr + 1); // 20 출력 (arr[1]과 동일)
```

# 포인터와 함수

- 포인터를 함수 인자로 넘기면 함수 내에서 포인터가 가리키는 값을 수정 가능
### 포인터 받는 법

```cpp
void modifyValue(int* ptr) {
    *ptr = 100;  // 포인터가 가리키는 값 수정
}

int main() {
    int a = 10;
    modifyValue(&a);  // 변수 a의 주소를 포인터로 전달
    return 0;
}
```

### 배열 포인터로 받는 법
```cpp
void modify(int* ptr) {
    *ptr = 100; // 포인터가 가리키는 값 수정
}

int main() {
    int arr[5] = {0};
    modify(arr);
    cout << arr[0]; // 100 출력
}
```
```cpp
void print2DArray(int (*arr)[3], int rows) {  // 다차원 배열 포인터로 받기
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print2DArray(arr, 2);  
    // 배열 포인터로 전달, 두번째 이후의 크기가 명시되어야 이름만 보내기 가능
    return 0;
}
```
```cpp
#include <iostream>

void print2DArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << *(arr + i * cols + j) << " ";  // 포인터를 사용해 배열 접근
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print2DArray(&arr[0][0], 2, 3);  // 배열의 첫 번째 원소의 주소를 포인터로 전달
    return 0;
}
```
# 포인터 배열
- 여러 포인터를 하나의 배열로 관리하는 방법
```cpp
int a = 5, b = 10, c = 15;
int* arr[3] = {&a, &b, &c}; // 포인터 배열 선언

cout << *arr[0]; // 5 출력 (a의 값)
cout << *arr[1]; // 10 출력 (b의 값)
cout << *arr[2]; // 15 출력 (c의 값)
```

# 다중 포인터
- 다른 포인터를 가리키는 포인터

```cpp
int x = 10;
int* ptr = &x;
int** ptr2 = &ptr;

cout << **ptr2; // 10 출력
```

# 구조체에 포인터 사용하기

```cpp
struct Person {
    string name;
    int age;
};

int main() {
    Person person = {"John", 30};
    Person* ptr = &person;  // 포인터 ptr이 person을 가리킴

    cout << ptr->name <<  ptr->age;

    return 0;
}
```
- Person* ptr = &person;는 person 객체의 주소를 ptr 포인터에 할당
- ptr->name과 ptr->age는 포인터를 통해 구조체 멤버에 접근하는 방법 (-> 연산자는 포인터를 통해 멤버에 접근할 때 사용합니다.)

# 클래스에 포인터 사용하기
```cpp
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person = {"John", 30};
    Person* ptr = &person;  // 포인터 ptr이 person을 가리킴

    ptr->introduce();  // 포인터를 통해 클래스 멤버 함수 호출
    cout << "Name: " << ptr->name << ", Age: " << ptr->age << endl;

    return 0;
}
```
- ptr->introduce();는 포인터를 통해 클래스의 멤버 함수 introduce()를 호출
- 클래스에서 멤버 변수와 멤버 함수에 접근할 때도 -> 연산자를 사용

### this 포인터와 체이닝 (Method Chaining)

- this는 자동으로 제공되는 포인터로, 현재 객체의 주소를 가리킴

```cpp
class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {} // 생성자 초기화 목록

    Person* setName(string n) {
        this->name = n;
        return this;  // 객체 자신을 반환
    }

    Person* setAge(int a) {
        this->age = a;
        return this;  // 객체 자신을 반환
    }

    void printInfo() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Person person("John", 30);
    person.setName("Alice")->setAge(25)->printInfo();  // 체이닝 호출

    return 0;
}

```
- setName과 setAge 함수는 this 포인터를 반환하여 메서드를 체이닝
- person.setName("Alice")->setAge(25)->printInfo();는 연속적으로 메서드를 호출하는 방식