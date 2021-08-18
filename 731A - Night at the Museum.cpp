#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string input;
    cin >> input;
    char current = 'a';
    int count = 0;
    for(int i = 0; i < input.length(); i++) {
        int rotate = abs(current - input[i]);
        if(rotate < 13) {
            count+=rotate;
        }
        else {
            count+=26-rotate;
        }
        current = input[i];
    }
    cout << count;
}