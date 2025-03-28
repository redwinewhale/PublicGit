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