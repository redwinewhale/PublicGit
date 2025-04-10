# 변수 (기초 - 심화 문제)
### 기초 문제

1. 변수 선언 및 출력
    >정수형 변수 a에 10을 저장하고 출력하세요.  
    >실수형 변수 b에 3.14를 저장하고 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
```

2. 두 변수의 합 구하기
    >정수 x, y를 입력받아 두 수의 합을 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << x + y << endl;
    return 0;
}
```

### 중급 문제
1. 세 개의 수 평균 구하기
    >세 정수를 입력받아 평균을 소수 첫째 자리까지 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    float x, y, z, result;
    int num;
    cout << "Enter the value of x, y, z: ";
    cin >> x >> y >> z;
    result = (x + y + z) / 3;
    result *= 10;
    num = result;
    result = num / 10.0;
    cout << "The average of " << x << ", " << y << ", " << z << " is " << result << endl;
    return 0;
}
```

3. 변수 값 교환하기
    >두 변수 a, b의 값을 입력받아 서로 바꾸고 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int temp;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping, the two numbers are: " << num1 << " " << num2 << endl;
    return 0;
}
```

### 심화 문제
- 거스름돈 계산  
    >사용자가 금액을 입력하면, 500원, 100원, 50원, 10원 단위의 최소 동전 개수를 계산하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int money, temp;
    cout << "Enter the amount of money: ";
    cin >> money;
    temp = money / 500;
    money -= temp * 500;
    cout << "500: " << temp << endl;
    temp = money / 100;
    money -= temp * 100;
    cout << "100: " << temp << endl;
    temp = money / 50;
    money -= temp * 50;
    cout << "50: " << temp << endl;
    temp = money / 10;
    money -= temp * 10;
    cout << "10: " << temp << endl;
    return 0;
}
```

# 반복문 (기초 - 심화 문제)
### 기초 문제

1. 1부터 10까지 출력
    >for문과 while문을 사용해 1~10까지 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i < 11) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    for (int k = 1; k < 11; k++) {
        cout << k << " ";
    }
    cout << endl;
    return 0;
}
```

2. N까지의 합 구하기
    >정수 N을 입력받아 1부터 N까지의 합을 구하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
```

### 중급 문제
1. 구구단 출력
    >N을 입력받아 N단을 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i < n + 1; i ++) {
        for (int k = 1; k < 10; k ++) {
            cout << i << " * " << k << " = " << i * k << endl;
        }
    }
    return 0;
}
```

2. 별 찍기
    >아래와 같은 별을 N 줄 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int k = 0; k < i + 1; k ++) {
            cout << "*";

    cout << endl;
    }
    return 0;
}
```

### 심화 문제
1. 소수 판별
    >숫자 N을 입력받아 N이 소수인지 판별하세요.
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
```

2. 피보나치 수열
    >N번째 피보나치 수를 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    int num1 = 1, num2 = 1, num3;
    cin >> n;
    if (n == 1) {
        cout << num1;
    } else if (n == 2) {
        cout << num1 << " " << num2;
    } else {
        cout << num1 << " " << num2 << " ";
        for (int i = 3; i <= n; i++) {
            num3 = num1 + num2;
            num2 = num1;
            num1 = num3;
            cout << num3 << " ";
        }
    }
    return 0;
}
```

# 조건문 (기초 - 심화 문제)
### 기초 문제
1. 짝수 홀수 판별
    >숫자를 입력받아 짝수인지 홀수인지 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}
```

2. 성적 등급 출력
    >점수를 입력받아 등급(A, B, C, D, F)을 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num >= 80) {
        if (num >= 90) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    } else {
        if (num >= 70) {
            cout << "C" << endl;
        } else if (num >= 60) {
            cout << "D" << endl;
        } else {
            cout << "F" << endl;
        }
    }
    return 0;
}
```

### 중급 문제
1. 최대값 구하기
    >세 개의 숫자를 입력받아 가장 큰 수를 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    num1 = (num1 > num2) ? num1 : num2;
    num1 = (num1 > num3) ? num1 : num3;
    cout << num1 << endl;
    return 0;
}
```

2. 윤년 판별
    >연도를 입력받아 윤년인지 판별하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        } else
            cout << year << " is a leap year.";
    } else
        cout << year << " is not a leap year.";
    return 0;
}
```

# 배열 (기초 - 심화 문제)
### 기초 문제
1. 배열 선언 및 출력
    >크기 5의 정수 배열을 선언하고, 1~5를 저장한 후 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

2. 배열 값 변경하기
    >arr[2]의 값을 100으로 변경하고 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    arr[2] = 100;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

### 심화 문제

1. 배열에서 특정 값 찾기
    >10개의 숫자 중 특정 숫자가 있는지 찾고, 있다면 몇 번째에 있는지 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {1, 12, 23, 34, 45, 56, 67, 78, 89, 90};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 0; i < size; i++) {
        if(arr[i] == num) {
            cout << "Number found at index " << i + 1 << endl;
            return 0;
        }
    }
    cout << "Number not found" << endl;
    return 0;
}
```
2. 배열 정열하기
    >10개의 숫자를 입력 받고 내림차순 정렬 후 출력

# 문자열 (기초 - 심화 문제)
### 기초 문제
1. 문자열 길이 출력하기
    >사용자로부터 문자열을 입력받고, 문자열의 길이를 출력하는 프로그램을 작성하시오 .

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    size_t size;
    cout << "input str: ";
    getline(cin, str);
    size = str.length();
    cout << size;
    
    return 0;
}
```

2. 문자열 뒤집기
    >사용자가 입력한 문자열을 거꾸로 출력하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    string temp;
    size_t size;

    cout << "input str: ";
    getline(cin, str);
    size = str.length();
    temp.resize(size);

    for (int i = 0; i < size; i++) {
        temp[i] = str[size - i - 1];
    }
    cout << temp;

    return 0;
}
```

3. 특정 문자 개수 세기
    >사용자가 입력한 문자열에서 특정 문자의 개수를 세어 출력하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    string str;
    size_t size;
    size_t num = 0;

    cout << "input str: ";
    cin >> str;
    size = str.length();

    cout << "input ch: ";
    cin >> ch;

    for (int i = 0; i < size; i++)
        if (str[i] == ch) num++;

    cout << ch << "의 개수: " << num;
    return 0;
}
```

### 중급 문제
1. 회문 검사
    >사용자가 입력한 문자열이 앞뒤로 동일한지(회문인지) 검사하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    size_t size;
    
    cout << "input std: ";
    cin >> str;
    size = str.length();

    if (size % 2 == 0) {
        for (int i = 0; i < size / 2; i ++) {
            if (str[i] != str[size - i - 1]) {
                cout << "No";
                return 0;
            }
        }
    } else {
        for (int i = 0; i < (size - 1) / 2; i ++) {
            if (str[i] != str[size - i - 1]) {
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";
    return 0;
}
```

2. 공백 제거
    >사용자가 입력한 문자열에서 공백을 모두 제거한 결과를 출력하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    size_t size;
    
    cout << "input str: ";
    getline(cin, str);
    size = str.length();

    for (int i = 0; i < size; i ++) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            i--;
        }
    }
    cout << str;
    return 0;
}
```

3. 특정 문자열 찾기
    >사용자가 입력한 문자열에서 특정 부분 문자열이 존재하는지 확인하고, 위치를 출력하는 프로그램을 작성하시오.
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, search;
    size_t size_str, size_search;
    
    int check = 0;
    int start_num;
    
    cout << "input str: ";
    cin >> str;
    size_str = str.length();

    cout << "input search: ";
    cin >> search;
    size_search = search.length();

    for (int i = 0; i < size_str; i ++) {
        if (str[i] == search[0]) {
            for (int j = 0; j < size_search; j ++) {
                if (str[i+j] != search[j]) break;
                if (j == size_search - 1) {
                    start_num = i;
                    cout << start_num << "위치 시작" << endl;
                    check = 1;
                }
            }
        }
    }
    if (check == 0) cout << "No";
    
    return 0;
}
```

### 심화 문제
1. 아나그램 검사
    >두 개의 문자열이 아나그램(Anagram, 철자만 바꿔서 같은 단어가 될 수 있는 관계) 인지 확인하는 프로그램을 작성하시오.
```cpp
# include <iostream>
# include <string>

using namespace std;

int main() {
    string str1, str2;
    int len1, len2;
    int check, check_num1 = 0, check_num2 = 0;

    cout << "input str1: ";
    cin >> str1;
    len1 = str1.length();

    cout << "input str2: ";
    cin >> str2;
    len2 = str2.length();

    if (len1 != len2) {
        cout << "No";
        return 0;
    }

    for (int i = 65; i < 123; i++) {
        for (int j = 0; j < len1; j ++) {
            if(str1[j] == i) check_num1++;
        }
        for (int j = 0; j < len2; j ++) {
            if(str2[j] == i) check_num2++;
        }
        if (check_num1 != check_num2) {
            cout << "No";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
```

# 다차원 배열 (기초 ~ 심화)
### 기초 문제
1. 문제 1: 2차원 배열 선언 및 출력
    >2x3 크기의 배열을 선언하고, 다음 값을 저장한 후 출력하세요.
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

2. 2차원 배열 값 변경하기
    >3x3 크기의 배열을 선언하고, (1,1)의 값을 100으로 변경한 후 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr[1][1] = 100;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 중급 문제
1. 행과 열의 합 구하기
    >사용자에게 3x3 크기의 행렬을 입력받고,
    >각 행의 합과 각 열의 합을 구하여 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {0};
    int sum = 0;
    cout << "Enter the elements of the 3x3 matrix: " << endl;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2]; 
    }
    cout << "Sum of row ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i][0] + arr[i][1] + arr[i][2] << " ";
    }
    cout << endl;
    cout << "Sum of column ";
    for (int i = 0; i < 3; i++) {
        cout << arr[0][i] + arr[1][i] + arr[2][i] << " ";
    }
    return 0;
}
```

2. 대각선 합 구하기
    >3 x 3 크기의 정사각형 행렬을 입력받고, 주대각선(↘)과 부대각선(↙)의 합을 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {0};
    int sum = 0;
    cout << "Enter the elements of the 3x3 matrix: " << endl;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2]; 
    }
    for(int i = 0; i < 3; i++) {
        sum += arr[i][i];
    }
    cout << "The sum of the diagonal elements is: " << sum << endl;
    sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += arr[i][2-i];
    }
    cout << "The sum of the anti-diagonal elements is: " << sum << endl;
    return 0;
}
```

### 심화 문제
1. 90도 회전
    >3 x 3 크기의 행렬을 입력받아 시계방향으로 90도 회전한 결과를 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int rotated[3][3]; 

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotated[j][2 - i] = matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
``` 

2. 행렬의 전치(Transpose)
    >2 x 3 크기의 행렬을 입력받아 전치 행렬(Transpose, 행과 열을 바꾸기) 를 출력하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    int transpose[3][2]; 

    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

3. 마방진 (Magic Square) 판별
    >3 x 3 크기의 행렬이 마방진(모든 행, 열, 대각선 합이 같음)인지 판별하세요.

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += matrix[0][j];
    }

    for (int i = 1; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) {
            cout << "NO" << endl;
            return 0;
        }
    }

    int diagonal1 = 0, diagonal2 = 0;
    for (int i = 0; i < 3; i++) {
        diagonal1 += matrix[i][i];
        diagonal2 += matrix[i][2 - i];
    }

    if (diagonal1 != sum || diagonal2 != sum) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}
```

4. N x M 배열 입력 받은 후 출력(최대 10)
    >몇 곱하기 몇 배열로 할지를 먼저 입력받고 한줄 씩(공백으로 숫자 구분) 입력 받기

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_N = 10;
    int arr[MAX_N][MAX_N] = {0};
    int tmp[MAX_N] = {0};
    int n, m, tmp_location = 0;
    string num, tmp_num;

    cout << "input N, M: ";
    cin >> n >> m;
    cin.ignore();

    for (int j = 0; j < n; j++) {
        getline(cin, num);
        int size = num.length(); 
        int tmp_count = 0; 
        
        for (int i = 0; i < size; i++) {
            if (num[i] == ' ' && tmp_count < m) { 
                tmp[tmp_count++] = i;
            }
        }
        tmp[tmp_count] = size;

        tmp_location = 0;
        for (int i = 0; i < m; i++) {
            int end_pos = tmp[i];
            tmp_num = num.substr(tmp_location, end_pos - tmp_location);
            arr[j][i] = stoi(tmp_num);
            tmp_location = end_pos + 1;
        }
    }

    cout << "---------" << endl;

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
