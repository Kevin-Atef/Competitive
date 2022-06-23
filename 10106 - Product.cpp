#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string one, two;
    while(cin >> one) {
        cin >> two;
        int arr[600]{};
        reverse(one.begin(), one.end());
        reverse(two.begin(), two.end());
        for(int i = 0; i < one.length(); i++) {
            for(int j = 0; j < two.length(); j++) {
                arr[i+j] += int(one[i] - 48) * int(two[j] - 48);
            }
        }
        for(int i = 0; i < 599; i++) {
            arr[i+1] += arr[i] / 10;
            arr[i] %= 10;
        }
        int i = 599;
        while(i > 0 && arr[i] == 0) i--;
        for(; i >= 0; i--) {
            cout << arr[i];
        }
        cout << '\n';
    }
}