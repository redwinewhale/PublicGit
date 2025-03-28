# 변수
### 정수형

|자료형|표현 바이트 수|
|:-|:-|
|int|4 bytes|
|short int|2 bytes|
|long int|4 bytes|
|unsigned int, size_t|4 bytes`음수 제외`|
|unsigned short int, size_t|2 bytes`음수 제외`|

### 실수 형

|자료형|표현 바이트 수|
|:-|:-|
|float|4 bytes|
|double|8 bytes|
|long double|8 bytes|

### 문자형

|자료형|표현 바이트 수|
|:-|:-|
|char|1 bytes|
|unsigned char|1 bytes`음수 제외`|

### 논리형

|자료형|표현 바이트 수|예|
|:-|:-|:-|
|bool|1 bytes|true / false|

### 추론형

- auto [name]
  
```cpp
auto x = 10;       // int
auto y = 3.14;     // double
auto z = "hello";  // const char[6]
```

### 형변환

- (바꾸려는 형) 변수 이름
```cpp
int a = 2;
float b;
b = (float)a;
```

### 상수
- const (자료형) 변수 이름 = 값;
> 처음 정의시 값 변환 불가

### 변수 한번에 선언
```cpp
int a = 1, b = 3;
```

# 입출력방식
### 출력

```cpp
#include <iostream>

int main() {

    // std::endl == '\n'
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << '\n';

    return 0;
}
```

### 입력

```cpp
#include <iostream> 

using namespace std;

int main(){

    int num;
    cout << "숫자 입력 :"; 
    cin >> num; // using namespace std; 없으면 std::cin >> num; 
    cout << num << endl;

    return 0;
}
```
### 여러개 입력 받기
```cpp
cin >> a >> b;  
// 공백 또는 엔터로 구분하여 입력 가능
char comma;  // 쉼표를 저장할 변수
cin >> a >> comma >> b >> comma >> c;  
// 쉼표를 구분자로 사용
```

### 문자열 입력 받기(공백 포함)
```cpp
cin.get(str, 100) 
// str: 배열 이름, 100: 받을 문자열의 수
```

```cpp
    char ch;
    cout << "하나의 문자를 입력하세요: ";
    ch = cin.get();  // 한 문자 읽기
```

# 조건문
### else - if

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int x, y = 1, 2;
    if (x < y) {
        cout << y;
    } else if (x == y) {
        cout << "equal";
    } else {
        cout << x;
    }

    return 0;
}
```

### 삼항 연산자

```cpp
#include <iostream>
using namespace std;

int main() {

    int x, y = 1, 2;
    cout << (x < y) ? y : x; // 괄호안의 조건이 참이면 y 반환 거짓이면 x 반환

    return 0;
}
```

### switch

```cpp
#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "input num : ";
    cin >> x;
    switch (x) {
        case 1:
            cout << "input num: 1";
            break;
        case 2:
            cout << "input num: 2";
            break
        default:
            cout << "???";
    }
    
    return 0;
}
```

# 반복문
### while

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int i = 0;
    while (i < 5) {
        if (i == 4) continue;
        cout << i;
        i++;
    }
    
    return 0;
}
```

### do - while

```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 0;
    do {
        cout << i;
        i++;
    } while (i < 5);

    return 0;
}
```

### for

```cpp
#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i < 5; i++) {
        if (i == 4) break;
        cout << i;
    }

    return 0;
}
```

