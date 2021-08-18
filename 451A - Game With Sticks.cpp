#include <iostream>
using namespace std;

int main() {
    int m, n, count = 0;
    cin >> m >> n;
    for(int i = 0; m != 0 && n != 0; i++) {
        m--;
        n--;
        count++;
    }
    if(count % 2 == 1) {
        cout << "Akshat";
    }
    else {
        cout << "Malvika";
    }
    return 0;
}