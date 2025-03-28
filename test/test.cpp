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

    cout << "\ninput ch: ";
    cin >> ch;

    for (int i = 0; i < size; i++)
        if (str[i] == ch) num++;

    cout << ch << "의 개수: " << num;
    return 0;
}