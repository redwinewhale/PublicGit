1. 최소값 찾기
    >세 개의 정수를 입력받아 가장 작은 값을 반환하는 함수를 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;

int SearchMinFunc(int, int, int);

int main() {
    int num1, num2, num3;
    
    cout << "input nums: ";
    cin >> num1 >> num2 >> num3;

    cout << "Min num: " << SearchMinFunc(num1, num2, num3);
    return 0;
}

int SearchMinFunc(int num1, int num2, int num3) {
    int tmp;
    tmp = (num1 < num2) ? num1 : num2;
    tmp = (tmp < num3) ? tmp : num3;
    return tmp;
}
```

2. 대문자 변환
    > 문자 하나를 입력받아 소문자면 대문자로 변환하고, 대문자면 그대로 반환하는 함수를 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;

char ToUpper(char);

int main() {
    char ch;

    cout << "input ch: ";
    cin >> ch;

    cout << ToUpper(ch);
    return 0;
}

char ToUpper(char ch) {
    if (ch >= 65 && ch < 97) {
        return ch;
    } else {
        return ch - 32;
    }
}
```

3. 소수 개수 구하기
    > 입력된 정수 n 이하의 모든 소수 개수를 반환하는 함수를 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

int CheckPrimeNum(int num) {
    for (int j = 2; j < num; j ++)
        if (num % j == 0) return 0;
    return 1;
}

int GetPrimeNum(int num) {
    int prime_num = 1;
    if (num == 2) return 1;
    for (int i = 2; i < num; i ++)
        prime_num += CheckPrimeNum(i);
    return prime_num;
}

int main() {
    int num;

    cout << "input num: ";
    cin >> num;

    cout << GetPrimeNum(num);
    return 0;
}
```

4. 문자 개수 찾기
    >주어진 문자열에서 각 문자별 등장 횟수를 출력하는 함수를 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

void FindNumOfText(string str, int size) {
    char ch;
    int checknum = 0;
    for (int i = 0; i < size; i ++) {
        ch = str[i];
        if (ch != ' ') {
            for (int k = i; k < size; k ++) {
                if (ch == str[k]) {
                    str[k] = ' ';
                    checknum ++;
                }
            }
            cout << ch << ": " << checknum << endl;
            checknum = 0;
        }
    }
}

int main() {
    string str;
    int size;

    cout << "input str: ";
    cin >> str;
    size = str.length();

    FindNumOfText(str, size);
    return 0;
}
```

5. 중복 문자 제거 후 정렬된 배열 반환
    >배열이 주어질 때, 중복을 제거하고 정렬된 배열을 반환하는 함수를 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

void DelTxtRm(string str) {
    int size = str.length();
    char ch;

    for (int i = 0; i < size; i ++) {
        ch = str[i];
        for (int k = i + 1; k < size; k ++) {
            if (ch == str[k]) {
                str.erase(k,1);
                i--;
                k--;
                size--;
            }
        }
    }

    cout << str;
}

int main() {
    string str;

    cout << "input str: ";
    cin >> str;
    DelTxtRm(str);
    return 0;
}
```