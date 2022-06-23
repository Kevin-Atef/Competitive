#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[4];
    int count{};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    for(int i = 0; i < 5; i++) {
        if(arr[i] == arr[i+1]) {
            count++;
        }
    }
    cout << count;
}