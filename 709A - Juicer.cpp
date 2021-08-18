#include<iostream>
using namespace std;

int main() {
    int orangeNumber, maxSize, maxWaste;
    cin >> orangeNumber >> maxSize >> maxWaste;
    int orange[orangeNumber];
    for(int i = 0; i < orangeNumber; i++) {
        cin>>orange[i];
    }
    int waste = 0, squeezed = 0;
    for(int i = 0; i < orangeNumber; i++) {
        if(orange[i] <= maxSize) {
            squeezed+= orange[i];
        }
        if(squeezed > maxWaste) {
            waste++;
            squeezed = 0;
        }
    }
    cout << waste;
}