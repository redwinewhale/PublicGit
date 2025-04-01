# 구조체 선언과 정의

```cpp
struct Student {
    string name;
    int age;
    double grade;
};
```

# 구조체 변수 선언과 사용

```cpp
Student s1;  // 구조체 변수 선언
s1.name = "윤원주";
s1.age = 24;
s1.grade = 4.5;

std::cout << "이름: " << s1.name << std::endl;
std::cout << "나이: " << s1.age << std::endl;
std::cout << "학점: " << s1.grade << std::endl;
```

# 구조체 초기화 방법

### 기본 초기화

```cpp
Student s1 = {"윤원주", 21, 4.5};
```

### 간략한 초기화

```cpp
Student s1{"윤원주", 21, 4.5};
```

# 구조체 배열

```cpp
Student students[2] = {
    {"윤원주", 24, 4.5},
    {"심찬희", 25, 3.8}
};

cout << students[1].name << endl; // 심찬희 출력
```

# 구조체 안에 함수 추가

```cpp
struct Student {
    string name;
    int age;
    double grade;

    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << ", 학점: " << grade << endl;
    }
};

int main() {
    Student s1 = {"윤원주", 24, 4.5};
    s1.introduce();
    return 0;
}
```

# 구조체와 typedef 또는 using

### typedef

```cpp
typedef struct {
    std::string name;
    int age;
} Person;
```

### using

```cpp
struct Person {
    std::string name;
    int age;
};

using Human = Person;  // Person을 Human으로도 사용 가능
```

# 구조체 함수 오버로딩

```cpp
#include <iostream>
using namespace std;

struct Calculator {
    // 두 정수를 더하는 함수
    int add(int a, int b) {
        return a + b;
    }

    // 세 정수를 더하는 함수 (매개변수 개수 다름)
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 두 실수를 더하는 함수 (매개변수 타입 다름)
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "정수 덧셈 (2개): " << calc.add(3, 4) << endl;
    cout << "정수 덧셈 (3개): " << calc.add(1, 2, 3) << endl;
    cout << "실수 덧셈: " << calc.add(2.5, 3.7) << endl;

    return 0;
}
```

# 생성자 오버로딩

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;

    // 기본 생성자
    Person() {
        name = "Unknown";
        age = 0;
    }

    // 이름만 받는 생성자
    Person(string n) {
        name = n;
        age = 0;
    }

    // 이름과 나이를 받는 생성자
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

int main() {
    Person p1;               // 기본 생성자 호출
    Person p2("원주");        // 이름만 받는 생성자 호출
    Person p3("윤원주", 21);  // 이름과 나이를 받는 생성자 호출

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
```

```cpp
이름: Unknown, 나이: 0
이름: 원주, 나이: 0
이름: 윤원주, 나이: 21
```
