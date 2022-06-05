#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int number{};
    cin >> number;
    int arr[number];

    for(int i = 0 ; i < number; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + number);
    for(int i = 0; i < number; i++) {
        cout << arr[i] << " ";
    }
}