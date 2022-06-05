#include <iostream>
using namespace std;

int main() {
    int pos{}, num{};
    for(int i = 0; i < 25; i++) {
        cin >> num;
        if(num == 1) pos = i;
    }
    int x = (pos % 5) + 1;
    int y = (pos / 5) + 1;
    cout << abs(x-3) + abs(y-3);
    
}