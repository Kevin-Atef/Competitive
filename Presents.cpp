#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    int brr[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        brr[arr[i]] = i;
    }
    for(int i = 1; i <= n; i++) {
        cout << brr[i] << " ";
    }
    return 0;
}