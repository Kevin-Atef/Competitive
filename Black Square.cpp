#include <iostream>
using namespace std;

int main() {
    int strip[4];
    int count = 0;
    for(int i = 0; i < 4; i++) {
        cin >> strip[i];
    }
    string input;
    cin >> input;
    for(int i = 0; i < input.length(); i++) {
        switch (input[i])
        {
        case '1':
            count+=strip[0];
            break;
        case '2':
            count+=strip[1];
            break;
        case '3':
            count+=strip[2];
            break;
        case '4':
            count+=strip[3];
            break;
        default:
            break;
        }
    }
    cout << count;
    return 0;
}