#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a * b;
    if(c % 2 == 0) {
        cout << c / 2;
    }
    else {
        cout << (c - 1) / 2;
    }
}