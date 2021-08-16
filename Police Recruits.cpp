#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int arr[x];
    int count = 0;
    for(int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    int police = 0;
    for(int i = 0; i < x; i++) {
        if(arr[i] == -1) {
            if(i - 1 < 0) {
                count++;
            }
            else {
                if(police > 0) {
                    police--;
                }
                else if(police <= 0) {
                    count++;
                }
            }
        }
        else if(arr[i] > 0) {
            police = police + arr[i];
        }
    }
    cout << count;
    return 0;
}