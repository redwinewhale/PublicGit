# 배열 선언 방법

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
    int i;
    for (i = 0; i < 10; i++) {
        cout << "배열의 " << i << " 번째 원소 : " <<  arr[i] << endl;
    }

    return 0;
}
```
