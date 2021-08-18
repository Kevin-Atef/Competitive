#include <iostream>
using namespace std;

int main() {
    int wordCnt;
    cin >> wordCnt;
    string input;
    for(int i = 0; i < wordCnt; i++) {
        cin >> input;
        int length = input.length();
        if(length <= 10) {
            cout << input << endl;
        }
        else if(length > 10) {
            cout << input[0] << (length - 2) << input[length - 1] << endl;
        }
    }

    return 0;
}