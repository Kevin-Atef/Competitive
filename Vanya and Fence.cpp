#include <iostream>
using namespace std;

int main() {
    int friendsNumber, heightOfFence;
    cin >> friendsNumber >> heightOfFence;

    int width = 0;
    for(int i = 0; i < friendsNumber; i++) {
        int friendHeight;
        cin >> friendHeight;
        if (friendHeight <= heightOfFence) {
            width = width + 1;
        }
        else if (friendHeight > heightOfFence) {
            width = width + 2;
        }
    }
    cout << width;

    return 0;
}