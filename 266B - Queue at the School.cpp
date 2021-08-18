#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    char arr[n];
    char tmp_arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        tmp_arr[i] = arr[i];
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < n && j != n -1; j++) {
            if(tmp_arr[j] == 'B' && tmp_arr[j + 1] == 'G') {
                swap(arr[j], arr[j+1]);
            }
        }
        for(int i = 0; i < n; i++) {
            tmp_arr[i] = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}

