#include <iostream>
using namespace std;

int main() {
    int n, k, cnt = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x = arr[k - 1];
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x && arr[i] != 0) {
            cnt++;
        }
    }
    cout << cnt;
}