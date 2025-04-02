# 초급
1. int arr[] = {1, 2, 3, 4, 5}; 배열을 포인터를 통해 역순으로 출력하는 코드를 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    
    for(int i = 4; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
```
   
2. 다음 코드에서 ptr++의 의미는 무엇인가
```
다음 배열값 가리키기
```

1. 배열의 크기를 알 수 없는 상태에서, ptr을 이용하여 배열을 순차적으로 출력하는 코드를 작성하시오. (배열의 끝은 0으로 종료된다고 가정)

```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5,3324,234,234,324,32,423,42,34,1,0};
    int* ptr = arr;
    int i = 0;
    while(1) {
        cout << *(ptr + i) << " ";
        if (*(ptr + i) == 0) break;
        i++;
    }
    return 0;
}
```

2. 배열 arr[]의 두 번째 원소를 ptr을 사용하여 변경한 후, 변경된 값을 출력하는 코드를 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[] = {3, 6, 9, 12};
    int* ptr = arr;
    *(ptr + 1) = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
```

1. 두 개의 배열 arr1[]과 arr2[]의 원소를 포인터를 이용해 한 원소씩 더한 값을 arr3[]에 저장하는 코드를 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[3];
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    int* ptr3 = arr3;

    for (int i = 0; i < 3; i++) {
        *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
    }

    for (int i = 0; i < 3; i++) {
        cout << *(ptr3 + i) << " ";
    }
    return 0;
}
```

# 중급
1. 배열 arr[] = {1, 2, 3, 4, 5}의 값들을 포인터를 사용하여 arr2[] = {5, 4, 3, 2, 1}와 같이 역순으로 바꾸는 코드를 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size / 2; i++) {
        swap(*(ptr + i),*(ptr + size - i - 1));
    }

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
```
2. 포인터를 사용하여 배열 arr[]의 최소값과 최대값을 찾는 프로그램을 작성하시오. 배열의 크기는 알 수 없다고 가정하고, 포인터만을 사용하여 탐색하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[] = {12,31,24,12,41,4,1,123,31,23,51,34,451};
    int *ptr = arr;
    int min, max;
    min = *ptr;
    max = *ptr;

    size_t size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0;  i < size - 1; i ++) {
        min = ( min < *(ptr + i + 1)) ? min : *(ptr + i + 1);
        max = ( max > *(ptr + i + 1)) ? max : *(ptr + i + 1);
    }

    cout << min << " " << max;

    return 0;
}
```

3. 다음 코드에서, 포인터 연산을 사용하여 2차원 배열의 값을 출력하는 프로그램을 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;


int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int (*ptr)[3] = arr;

    for (int i = 0; i < 3; i ++) { 
        for (int j = 0; j < 3; j ++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

1. 구조체 배열을 포인터로 다룰 때, 배열의 각 구조체의 name과 age를 출력하는 프로그램을 작성하시오
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Person {
    std::string name;
    int age;
};

int main() {
    Person arr[3] = {{"John", 30}, {"Alice", 25}, {"Bob", 35}};
    Person *ptr = arr;

    for (int i = 0; i < 3; i ++) {
        cout << (ptr + i) -> name << " " << (ptr + i) -> age << endl;
    }

    return 0;
}
```

5. 클래스 내에서 포인터를 사용하여 멤버 변수에 접근하고, 객체의 정보를 출력하는 프로그램을 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        std::string title;
        int pages;
};

int main() {
    Book book1 = {"C++ Programming", 300};
    Book* ptr = &book1;

    cout << ptr -> title << " " << ptr -> pages;
    return 0;
}
```

6. 포인터 배열을 사용하여 여러 개의 문자열을 저장하고, 각 문자열의 길이를 출력하는 프로그램을 작성하시오.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    const char* words[] = {"apple", "banana", "cherry", "date"};
    for (int i = 0; i < 4; i ++) {
        int length = 0;
        while (words[i][length] != '\0')
            length ++;
        cout << length << " ";
    }
}
```

7. int arr[] = {10, 20, 30, 40, 50}; 배열을 포인터를 사용하여 홀수 번째 원소만 출력하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i += 2)
        cout << *(ptr + i) << " ";
    return 0;
}
```

# 심화

 1. 두 개의 2차원 배열 arr1[3][3]과 arr2[3][3]에 대해, 포인터를 사용하여 두 배열의 합을 arr3[3][3]에 저장하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr1[][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[][3] = {2,3,4,5,6,7,8,9,1};
    int arr3[3][3];

    int (*ptr1)[3] = arr1, (*ptr2)[3] = arr2, (*ptr3)[3] = arr3;
    
    for(int i = 0; i < 3; i ++) {
        for(int j = 0; j < 3; j ++) {
            *(*(ptr3 + i) + j) = ptr1[i][j] + *(*(ptr2 + i) + j);
        }
    }
    for(int i = 0; i < 3; i ++) {
        for(int j = 0; j < 3; j ++) {
            cout << ptr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

1. 포인터를 사용하여 1차원 배열을 2차원 배열로 변환하는 프로그램을 작성하시오. 예를 들어 arr1[6] 배열을 arr2[2][3] 배열로 변환하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[2][3];

    int *ptr1 = arr1;
    int (*ptr2)[3] = arr2;

    for (int j = 0; j < 3; j++) {
        ptr2[0][j] = ptr1[j];
    }
    for (int j = 0; j < 3; j++) {
        ptr2[1][j] = ptr1[j+3];
    }

    for (int i = 0; i < 2; i ++) {
        for (int j = 0; j < 3; j ++) {
            cout << ptr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
}
```

2. struct Point { int x; int y; }; 구조체 Point를 포인터 배열로 처리하여 여러 점의 좌표를 입력받고, 가장 멀리 떨어진 두 점을 찾는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

struct Point { int x; int y; };

int main() {
    int max_distance = 0;
    int difference;
    int x_square, y_square;

    Point point[10];
    Point *max[2];
    Point *p[10];

    for (int i = 0; i < 10; i ++)
        p[i] = &point[i];

    cout << "좌표 10개 입력" << endl;
    for (int i = 0; i < 10; i ++) {
        cout << i + 1 << "번째 좌표: ";
        cin >> p[i] -> x >> p[i] -> y;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            x_square = (p[i] -> x - p[j] -> x) * (p[i] -> x - p[j] -> x);
            y_square = (p[i] -> y - p[j] -> y) * (p[i] -> y - p[j] -> y);
            difference = x_square + y_square;
            if (max_distance < difference) {
                max_distance = difference;
                max[0] = p[i];
                max[1] = p[j];
            }
        }
    }

    cout << max[0] -> x << ", " << max[0] -> y << endl;
    cout << max[1] -> x << ", " << max[1] -> y << endl;
    return 0;
}
```

3. 포인터를 사용하여 arr1[2][2] 배열과 arr2[2][2] 배열의 값을 비교하여 큰 값을 arr3[2][2]에 저장하는 프로그램을 작성하시오.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr1[][2] = {1, 2, 3, 4};
    int arr2[][2] = {4, 3, 2, 1};
    int arr3[2][2];

    int (*ptr1)[2] = arr1;
    int (*ptr2)[2] = arr2;
    int (*ptr3)[2] = arr3;

    for (int i = 0; i < 2; i ++)
        for (int j = 0; j < 2; j ++)
            ptr3[i][j] = (ptr1[i][j] > ptr2[i][j]) ? ptr1[i][j] : ptr2[i][j];

    for (int i = 0; i < 2; i ++) {
        for (int j = 0; j < 2; j ++)
            cout << ptr3[i][j] << " ";
        cout << endl;
    }
}
```