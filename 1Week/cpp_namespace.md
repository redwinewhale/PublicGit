# 이름 공간(namespace)

### namespace란?

- 명령어의 출처 표시

```cpp
#include <iostream>

int main() {

    std::cout << "hello"; // cout 명령어의 출처 -> std 표시

    return 0;
}

```

### namespace 공간 정의 

```cpp
// header1.h 내용

namespace header1 {
    int foo();
    void bar();
}
```
```cpp
// header2.h 내용

namespace header2  {
    int foo();
    void bar();
}
```
```cpp
#include "header1.h" 

namespace header1 {
    int func() {
        foo(); // header1::foo() 실행
        header2::foo(); // header2::foo() 실행
    }
}
```

### 아무 이름 공간에서 소속 되지 않은 경우 아래와 같이 선언 필요

```cpp
#include "header1"
#include "header2"

int func() {
    header1::foo(); // header1::foo() 실행
}
```

### namespace 생략 하고 싶을 시

```cpp
#include "header1"

using header1::foo; // foo 실행시 header1 생략
int main() {
    foo();
}
```
```cpp
#include "header1"

using namespace header1; //  header1 에 정의된 모든 것을 header1:: 없이 사용

int main() {
    foo();
    bar();
    header2::foo(); // header2::foo() 실행
}
```

### 이름 없는 공간

```cpp
#include <iostream>

namespace {
    /* static int OnlyInThisFile() 동일
       이 파일 안에서만 사용 가능
       헤더파일로 위 파일을 받아도 namespace 안의 함수는 사용 불가 */
    int only_in_this_file = 0;
    int OnlyInThisFile() {}
}
int main() {
    OnlyInThisFile();
    only_in_this_file = 3;
}
```


