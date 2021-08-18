#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    int stringLength = input.length(); 
    if(stringLength == 1) {
        cout << input;
        return 0;
    }
    int arrLength = stringLength - (stringLength / 2 - 1) - 1;
    char arr[arrLength];

    for(int i = 0; i < stringLength; i++) {
        static int j = 0;
        if(i % 2 == 0) {
            arr[j] = input[i];
            j++;
        }
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for(int i = 0; i < arrLength; i++) {
        if(i + 1 != arrLength) {
            cout<<arr[i] << '+';
        }
        else {
            cout << arr[i];
        }
    }
    return 0;
}