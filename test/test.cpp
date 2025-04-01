#include <iostream>
#include <string>

using namespace std;


int main() {
    int x = 10;
    int* ptr = &x;
    ptr = ptr + 1;
    *ptr = 20;
    std::cout << x;
}

