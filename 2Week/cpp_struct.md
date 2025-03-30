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