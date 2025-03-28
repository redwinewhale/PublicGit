# 함수의 기본 구조

```cpp
반환형 함수이름(매개변수) {
    // 실행할 코드
    return 값;  // 반환형이 있을 경우
}
```

### 반환형 (Return Type)

    - int → 정수를 반환
    - double → 실수를 반환
    - void → 아무것도 반환하지 않음

### 매개변수 (Parameter)

    - int a, int b 이런 식으로 여러 개 받을 수도 있음

### return 문

    - 함수가 실행된 후 결과를 돌려주는 역할
    - 반환형이 void이면 return이 필요 없음

### 사용 예시

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {  
    return a + b;  
}

int main() {
    int result = add(3, 5);
    cout << "3 + 5 = " << result << endl;  
    return 0;
}
```

# 기본 매개변수 (Default Parameters)

```cpp
#include <iostream>
using namespace std;

// 기본 매개변수 설정
void greet(string name = "차니핑") {
    cout << "안녕, " << name << "!" << endl;
}

int main() {
    greet();          // 기본값 사용
    greet("승빈");  // 직접 값 전달
    return 0;
}
```

### 매개변수 받는 법

| 변수형              | 매개변수                                 |
| ------------------- | ---------------------------------------- |
| int num             | int num                                  |
| float num           | float num                                |
| int arr[num]        | int arr[num]                             |
| int arr[num1][num2] | int arr[num1][num2]<br />int arr[][num2] |
| string str          | string str                               |
|                     | auto name                                |

# 함수의 선언과 정의

- 함수를 미리 선언하고, 나중에 정의

```cpp
#include <iostream>
using namespace std;

// 함수 원형 (선언)
int multiply(int, int);

int main() {
    cout << "3 * 4 = " << multiply(3, 4) << endl;
    return 0;
}

// 함수 정의
int multiply(int a, int b) {
    return a * b;
}
```

# 함수 응용

### 인라인 함수 (Inline Function)

- 컴파일러가 함수 코드를 그대로 복사해서 삽입하기 때문에 호출 비용이 줄어듦

```cpp
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "3의 제곱: " << square(3) << endl;
    return 0;
}
```

### 람다 함수 (Lambda Function)

- [캡처](매개변수) -> 반환형 { 함수 본문 };

  - [] 캡처 리스트: 람다가 외부 변수를 가져올 때 사용
  - () 매개변수 리스트: 일반 함수처럼 인자를 받을 수 있음
  - -> 반환형 반환 타입: 반환값이 있을 때 사용 (auto로 생략 가능)
  - {} 함수 본문: 실행할 코드

```cpp
#include <iostream>
using namespace std;

int main() {
    // 람다 함수 정의 (두 수의 합을 구함)
    auto add = [](int a, int b) { return a + b; };

    cout << "4 + 6 = " << add(4, 6) << endl;
    return 0;
}
```

### 재귀 함수

```cpp
#include <iostream>
using namespace std;

// 팩토리얼 함수 (n! = n * (n-1) * (n-2) ... * 1)
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "5! = " << factorial(5) << endl;
    return 0;
}
```
