# 클래스 기본 구조

```cpp
class 클래스이름 {
public:
    // 멤버 변수
    int 변수명;

    // 생성자, 변수 자동 초기화 기능
    클래스이름() {
        변수명 = 0;
    }

    // 멤버 함수
    void 함수명() {
        // 기능 구현
    }

    // 소멸자
    ~MyClass() {
        // 소멸될 때 실행할 코드
    }
};
```

### 생성자

- 객체가 생성될 때 자동으로 호출되는 함수
  > 클래스 이름과 동일해야 함
  >

### 소멸자

- 객체가 소멸될 때 자동 호출되는 함수
  > ~클래스이름() 형태이며, 반환값이 없고 매개변수를 받을 수 없음
  >

### 멤버 함수의 클래스 외부 정의

```cpp
class Animal {
public:
    void speak(); // 함수 선언
};

// 클래스 외부에서 함수 정의
void Animal::speak() {
    cout << "동물이 소리를 냅니다." << endl;
}
```

### 접근 지정자

- public : 클래스 외부에서도 접근 가능
- private : 클래스 내부에서만 접근 가능 (기본값)
- protected : 상속받은 클래스, 클래스 내부에서 접근 가능

```cpp
class Example {
private:
    int privateVar; // 외부에서 접근 불가

public:
    int publicVar;  // 외부에서 접근 가능

    void setPrivateVar(int value) {
        privateVar = value;
    }
};
```

### 생성자 오버로딩

```cpp
class Person {
public:
    string name;

    // 기본 생성자(자동 설정)
    Person() {
        name = "이름 없음";
    }

    // 매개변수 생성자(수동 설정)
    Person(string newName) {
        name = newName;
    }
};
```

### 정적 멤버 변수와 정적 멤버 함수

##### 정적 멤버 변수

- static 키워드 사용
  > 모든 객체가 공유함
  >

```cpp
class Counter {
public:
    static int count; // 정적 멤버 변수

    Counter() {
        count++;
    }
};

// 정적 멤버 변수 초기화, 클래스 이름으로 접근 가능
int Counter::count = 0;
```

##### 정적 멤버 함수

- static 키워드 사용
  > 객체를 생성하지 않고 호출 가능
  >

```cpp
class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

// 사용법, 클래스 이름으로 접근 가능
int result = Math::add(3, 4);
```

# 클래스 사용

### 객체 생성과 사용

```cpp
Car myCar;  // 객체 생성
myCar.drive(); // 멤버 함수 호출
```

# 상속

```cpp
class 자식클래스 : accessSpecifier 부모클래스 {
    // 자식 클래스의 멤버 변수와 메서드
};
```
- accessSpecifier: 부모 클래스의 접근 제어자를 지정 (public, protected, private).
    >public: 부모 클래스의 public 멤버는 자식 클래스에서도 public으로 접근 가능.
    >protected: 부모 클래스의 protected 멤버는 자식 클래스에서 접근 가능.
    >private: 부모 클래스의 private 멤버는 자식 클래스에서 직접 접근할 수 없음.

```cpp
class Parent {
public:
    void show() {
        cout << "부모 클래스" << endl;
    }
};

// 자식 클래스
class Child : public Parent {
public:
    void greet() {
        cout << "자식 클래스" << endl;
    }
};

Child c;
c.show();  // 부모 클래스 기능 사용 가능
c.greet(); // 자식 클래스 기능
```

# 클래스에서 함수 오버로딩

```cpp
#include <iostream>
using namespace std;

class Printer {
public:
    // 문자열 출력
    void print(string text) {
        cout << "문자열: " << text << endl;
    }

    // 정수 출력 (매개변수 타입 다름)
    void print(int num) {
        cout << "정수: " << num << endl;
    }

    // 실수 출력 (매개변수 타입 다름)
    void print(double num) {
        cout << "실수: " << num << endl;
    }
};

int main() {
    Printer p;
    p.print("안녕!");  // 문자열 출력
    p.print(100);      // 정수 출력
    p.print(3.14);     // 실수 출력

    return 0;
}
```