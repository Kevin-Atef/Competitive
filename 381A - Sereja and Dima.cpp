#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num{}, s{}, d{}, left{}, right{}; 
    cin >> num;
    right = num-1;
    int arr[num];
    for(int i = 0; i < num; i++) cin >> arr[i];
    for(int i = 0; i < num; i++) {
        if(i % 2 == 0) {
            if(arr[right] > arr[left]) {
                s+= arr[right];
                right--;
            }
            else {
                s+= arr[left];
                left++;
            }
        }
        else {
            if(arr[right] > arr[left]) {
                d+= arr[right];
                right--;
            }
            else {
                d+= arr[left];
                left++;
            }
        }
    }
    cout << s << " " << d;
}