#include <iostream>
#include <string>

using namespace std;

    // 구조체 선언 및 정의의
struct Student {
    string name;
    int age;
    double grade;
};

int main() {

    // 변수 선언 및 초기화 방법

    Student s1{"윤원주", 24, 4.3};

    Student s2 = {"심찬희", 25, 3.8};

    Student s3;
    s3.name = "신승빈";
    s3.age = 24;
    s3.grade = 3.4;

    Student students[3] = {
        {"윤원주", 24, 4.3},
        {"심찬희", 25, 3.8},
        {"신승빈", 24, 3.4}
    };

    // 접근 및 사용법

    cout << "이름: " << s1.name << endl;
    cout << "나이: " << s1.age << endl;
    cout << "학점: " << s1.grade << endl;

    cout << endl;

    cout << "이름: " << s2.name << endl;
    cout << "나이: " << s2.age << endl;
    cout << "학점: " << s2.grade << endl;

    cout << endl;

    cout << "이름: " << s3.name << endl;
    cout << "나이: " << s3.age << endl;
    cout << "학점: " << s3.grade << endl;

    std::cout << students[1].name << std::endl;

    return 0;
}

