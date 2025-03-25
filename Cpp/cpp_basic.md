# 변수
### 정수형

|자료형|표현 바이트 수|
|:-|:-|
|int|4 bytes|
|short int|2 bytes|
|long int|4 bytes|
|unsigned int|4 bytes`음수 제외`|
|unsigned short int|2 bytes`음수 제외`|

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

