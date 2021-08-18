#include <iostream>
using namespace std;

int main() {
    string stone, inst;
    cin>>stone;
    cin>>inst;
    int count = 1;
    for(int i = 0; i < inst.length(); i++) {
        static int x = 0;
        static char currentStone = stone[x];
        if(currentStone == inst[i]) {
            count++;
            x++;
            currentStone = stone[x];
        }
    }
    cout << count;
    return 0;
}