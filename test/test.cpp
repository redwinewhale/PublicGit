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
