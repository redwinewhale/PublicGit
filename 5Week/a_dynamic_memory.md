# 초급

1. 정수 하나를 동적 할당 받아서 입력받고 출력해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int *a = new int;
    cin >> *a;
    cout << *a << endl;
    delete a;
    return 0;
}
```

2. 사용자가 입력한 크기만큼의 1차원 배열을 동적으로 만들어서 입력받고 출력해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr_size;
    cin >> arr_size;
    int *a = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < arr_size; i++) {
        cout << a[i] << " ";
    }
    
    delete[] a;
    return 0;
}
```

3. 동적으로 만든 배열에 입력된 값들의 평균을 구해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr_size;
    double average, sum = 0.0;;
    cin >> arr_size;

    int *arr = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    average = sum / arr_size;
    cout << "Average: " << average << endl;
    return 0;
}
```

4. 동적 정수 배열에서 가장 큰 값을 찾아보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int FindMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr_size;
    cin >> arr_size;

    int *arr = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
    cout << "Max: " << FindMax(arr, arr_size) << endl;
    delete[] arr;
    return 0;
}
```

5. 사용자가 배열 크기를 입력하고, 해당 크기의 짝수만 저장하는 배열을 만들어보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr_size;
    cin >> arr_size;

    int *arr = new int[arr_size];
    for (int i = 1; i < arr_size; i += 2) {
        cin >> arr[i];
    }
    delete[] arr;
    return 0;
}
```

# 중급

1. 사용자에게 행과 열을 입력받고, 2차원 배열을 동적으로 생성해 값을 채우고 출력해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int **arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
```

2. 동적 2차원 배열의 전체 합계와 평균을 구해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int row, col;
    double sum = 0.0, aver;
    cin >> row >> col;

    int **arr = new int*[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            sum += arr[i][j];
        }
    }

    aver = sum / (row * col);

    cout << sum << " " << aver;
    return 0;
}
```

3. 입력된 2차원 배열의 대각선 합을 구해보자.
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int row, col, sum = 0;

    cin >> row >> col;

    int **arr = new int*[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            if (i == j)
                sum += arr[i][j];
        }
    }

    cout << sum;
    return 0;
}
```

4. 2차원 배열을 거꾸로 출력해보자 (행/열 뒤집기).
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int row, col;

    cin >> row >> col;

    int **arr = new int*[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            cout << arr[row - i - 1][col - 1 - j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

5. 1차원 배열을 동적으로 생성한 뒤, 해당 배열을 오름차순으로 정렬해보자.
```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int arr_size;
    int temp;
    cin >> arr_size;

    int *arr = new int[arr_size];
    for (int i = 0; i < arr_size; i++)
        cin >> arr[i];

    for (int i = 0; i < arr_size - 1; i++) {
        for (int j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

# 심화

1. 문자열 배열을 동적으로 만들어서 n개의 이름을 저장하고 출력해보자.
```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string *names = new string[n];

    for(int i = 0; i < n; i++) {
        getline(cin, names[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    return 0;
}
```

2. 학생 수와 과목 수를 입력받아 점수 2차원 배열을 만들고 평균 점수 출력하기
```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int row, col;
    double sum = 0.0;
    
    cout << "student, project: ";
    cin >> row >> col;
    int **arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j ++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j ++) {
            sum += (double)arr[i][j];
        }
        cout << sum / col << endl;
        sum = 0;
    }
}
```

3. 사용자에게 크기를 입력받아 삼각형 모양의 배열(1~n행, i행은 i개 원소)을 동적으로 할당해 출력하기
```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int size;
    cin >> size;

    int **arr = new int*[size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[i+1];
    }

    for(int i = 0; i < size; i ++) {
        for(int j = 0; j <= i; j++) {
            arr[i][j] = 0;
        }
    }

    cout << "------" << endl;

    for(int i = 0; i < size; i ++) {
        for(int j = 0; j < i + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

4. 2차원 배열을 동적으로 만든 후, 열을 추가하거나 삭제하는 기능을 구현해보자.
```cpp
#include <iostream>
using namespace std;

int** deleteColumn(int** arr, int rows, int cols, int del_col);
int** insertColumn(int** arr, int rows, int cols, int insert_col, int default_value = 0);

void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 4;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j + 1;
        }
    }

    cout << "원본 배열:\n";
    printArray(arr, rows, cols);

    // 열 추가 (2번 열 위치에 기본값 99 삽입)
    int insert_index = 2;
    arr = insertColumn(arr, rows, cols, insert_index, 99);
    cols++;

    cout << "\n열 " << insert_index << "번에 추가 후:\n";
    printArray(arr, rows, cols);

    // 열 삭제 (1번 열 삭제)
    int delete_index = 1;
    arr = deleteColumn(arr, rows, cols, delete_index);
    cols--;

    cout << "\n열 " << delete_index << "번 삭제 후:\n";
    printArray(arr, rows, cols);

    // 메모리 해제
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}

int** insertColumn(int** arr, int rows, int cols, int insert_col, int default_value = 0) {
    if (insert_col < 0 || insert_col > cols) {
        cout << "삽입할 열 인덱스가 범위를 벗어났습니다.\n";
        return arr;
    }

    int** new_arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        new_arr[i] = new int[cols + 1];
        int col_idx = 0;
        for (int j = 0; j < cols + 1; j++) {
            if (j == insert_col) {
                new_arr[i][j] = default_value;  // 새 열 기본값
            } else {
                new_arr[i][j] = arr[i][col_idx++];
            }
        }
    }

    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return new_arr;
}

int** deleteColumn(int** arr, int rows, int cols, int del_col) {
    if (del_col < 0 || del_col >= cols) {
        cout << "삭제할 열 인덱스가 범위를 벗어났습니다.\n";
        return arr;
    }

    int** new_arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        new_arr[i] = new int[cols - 1];
        int col_idx = 0;
        for (int j = 0; j < cols; j++) {
            if (j == del_col) continue;
            new_arr[i][col_idx++] = arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return new_arr;
}
```