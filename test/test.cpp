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