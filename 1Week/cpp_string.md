# string 헤더란?

 - 문자열 처리를 위한 라이브러리를 포함한 헤더

### string 기본 사용법

string 변수는 char형 의 연속된 값
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "World";
    
    cout << str1 << " " << str2 << endl;  // Hello World 출력

    return 0;
}
```

### string 주요 기능
##### 문자열 입력 받기(cin, getline)

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    cout << "input name: ";
    cin >> name;  // 공백을 기준으로 한 단어만 입력됨
    cout << "name: " << name << endl;

    return 0;
}
```
---
- 여러 단어 입력식 getline 사용
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    cout << "input name: ";
    getline(cin, name);  // 공백 포함 한 줄 입력
    cout << "name: " << name << endl;

    return 0;
}
```

##### 문자열 길이 구하기(length(), size())

```cpp
string str = "Hello, World!";
cout << "str length: " << str.length() << endl;  // 13
cout << "str size: " << str.size() << endl;   // 13
// length() == size()
```

##### 문자열 합치기(+)

```cpp
string a = "Hello, ";
string b = "World!";
string c = a + b;  // 문자열 합치기
cout << c << endl;  // Hello, World! 출력
```

##### 특정 문자에 접근(str[index], str.at(index))

```cpp
string str = "Hello";
cout << str[0] << endl;  // 'H'
cout << str.at(1) << endl;  // 'e'
```

##### 문자열 비교`사전순`(==, !=, <, >)

```cpp
string a = "apple";
string b = "banana";

if (a == b) {
    cout << "같은 문자열" << endl;
} else if (a < b) {
    cout << "a가 b보다 작음" << endl;
} else {
    cout << "a가 b보다 큼" << endl;
}
```

##### 문자열 일부 추출(substr(start, length))

```cpp
string str = "Hello, World!";
string sub = str.substr(7, 5);  // 7번 인덱스부터 5글자 추출
cout << sub << endl;  // "World"
```

##### 문자열 찾기(find, string::npos)

- find("찾을 문자열"): 문자열 위치 반환 (string::npos는 찾지 못했을 때 저장되는 값)
```cpp
string str = "Hello, World!";
size_t pos = str.find("World");

if (pos != string::npos) {
    cout << "찾은 위치: " << pos << endl;  // 7
} else {
    cout << "문자열을 찾을 수 없음" << endl;
}
```

##### 문자열 치환(replace(start, length, new_string))

```cpp
string str = "Hello, World!";
str.replace(7, 5, "C++");  // 7번 인덱스부터 5글자 → "C++"로 변경
cout << str << endl;  // Hello, C++!
```

##### 문자열 삭제(erase(start, length))

```cpp
string str = "Hello, World!";
str.erase(5, 2);  // 5번 인덱스부터 2글자 삭제
cout << str << endl;  // HelloWorld!
```

##### 문자열 삽입(insert(index, string))

```cpp
string str = "Hello!";
str.insert(5, ", World");  // 5번 인덱스에 삽입
cout << str << endl;  // Hello, World!
```

##### 문자열 대소문자 변환(toupper(), tolower())

```cpp
#include <iostream>
#include <string>
#include <cctype>  // 문자 변환 함수 포함

using namespace std;

int main() {

    string str = "Hello, World!";
    
    for (char &c : str) {
        c = toupper(c);  // 대문자로 변환
    }
    cout << str << endl;  // HELLO, WORLD!
    
    for (char &c : str) {
        c = tolower(c);  // 소문자로 변환
    }
    cout << str << endl;  // hello, world!
    
    return 0;
}
```
- char &c : str의 의미 `레퍼런스 개념`  
    char &c → str 문자열의 각 문자를 참조하는 변수 (&를 붙여서 원본을 직접 수정 가능)  
    str → 순회할 대상(문자열)  
    ```cpp
    #include <iostream>
    #include <string>
    using namespace std;

    int main() {

        string str = "hello";

        for (char &c : str) cout << c << " "; // h e l l o 출력

        return 0;
    }
    ```

##### 문자열 숫자로 변환(stoi(), stol(), stoll(), stof(), stod() 등)

```cpp
string str = "1234";
int num = stoi(str);  // 문자열 → 정수 변환
cout << num + 1 << endl;  // 1235
```

##### 숫자를 문자열로 변환(to_string())

```cpp
int num = 1234;
string str = to_string(num);
cout << str + "5" << endl;  // 12345
```

##### string 변수 크기 설정(resize())
```cpp
temp.resize(size);
```
