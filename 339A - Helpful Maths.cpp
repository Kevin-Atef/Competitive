#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input{}, brr{};
    cin >> input;
    for(int i = 0; i < input.length(); i+=2) {
        brr += input[i];
    }
    sort(brr.begin(), brr.end());
    for(int i = 0; i < brr.length(); i++) {
        if(i == brr.length() - 1) {
            cout << brr[i];
            break;
        }
        cout << brr[i] << '+';
    }
}