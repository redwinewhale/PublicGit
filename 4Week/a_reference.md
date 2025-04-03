# 초급
1. 숫자 증가 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

int increment(int &a) {
    a++;
    return a;
}

int main() {
    int num = 5;
    increment(num);
    cout << num << endl;
    return 0;
}
```

2. 두 변수의 값을 교환하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
```

3. 두 값 중 큰 값을 참조로 반환하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

int &GetMax(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 15, b = 10;

    GetMax(a, b) = 50;
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}
```

4. 포인터와 레퍼런스를 비교하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

void ModifyValues(int *a, int &b) {
    *a = 100;
    b = 200;
}

int main() {
    int x = 10;
    int y = 20;
    ModifyValues(&x, y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}
```

# 중급

1. 값을 변경할 수 없는 출력 함수 작성(const)
```cpp
#include <iostream>
#include <string>

using namespace std;

void Display(const int &a) {
    cout << a << endl;
}

int main() {
    int value = 30;
    Display(value);
    return 0;
}
```

2. 문자열을 수정하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

void AppendText(string &str) {
    str += "!!!";
}

int main() {
    string str = "Hello";
    AppendText(str);
    cout << str << endl;
    return 0;
}
```

3. 첫 번째 문자를 대문자로 변환하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

void CapitalizeFirstLetter(string &str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
}

int main() {
    string str = "hello";
    CapitalizeFirstLetter(str);
    cout << str << endl;
    return 0;
}
```

# 심화

1. 배열 요소를 참조로 반환하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

int &GetElement(int (&arr)[5], int index) {
    return arr[index];
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    GetElement(numbers, 2) = 100;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    return 0;
}
```

2. 2D 배열의 특정 요소를 수정하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

int &GetMatrixElement(int (&arr)[2][3], int row, int col) {
    return arr[row][col];
}

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    GetMatrixElement(arr, 1, 1) = 99;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

3. 구조체의 값을 변경하는 함수 작성
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
};

void ChangeAge(Person &p, int age) {
    p.age = age;
}

int main() {
    Person john = {"John", 25};
    ChangeAge(john, 30);
    cout << "Name: " << john.name << ", Age: " << john.age << endl;
    return 0;
}
```

4. 배열에서 최댓값을 찾고 변경하는 함수 작성
```cpp
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
```