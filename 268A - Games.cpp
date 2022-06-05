#include <iostream>
using namespace std;

int main() {
    int num{}, count{}; 
    bool even{};
    cin >> num;
    int arr[num*2];
    for(int i = 0; i < num*2; i++) cin >> arr[i];
    for(int i = 0; i < num*2; i++) {
        if(i%2 == 0) even = true;
        else even = false;
        for(int j = i; j < num*2; j++) {
            if(arr[i] == arr[j] && (j%2 == even)) count++;
        }
    }
    cout << count;
}