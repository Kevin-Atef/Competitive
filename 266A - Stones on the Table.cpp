#include <iostream>
using namespace std;

int main() {
    int x;
    int count = 0;
    cin >> x;
    string color;
    cin >> color;
    for (int i = 0; i < x; i++) {
        if(color[i] == color[i+1] && color[i+1] != x) {
            count++;
        }
    }
    cout << count;
    return 0;
}