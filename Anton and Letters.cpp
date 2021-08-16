#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string input;
    getline(cin, input);
    int stringLength = input.length();
    
    if(stringLength == 2) {
        cout << 0;
        return 0;
    }
 
    int arrLength = stringLength / 3;
    char arr[arrLength];
 
    //Converts string into a char array
    for(int i = 0; i < stringLength; i++) {
        static int j = 0;
        if((i - 1) % 3 == 0){
            arr[j] = input[i];
            j++;
        }
    }
 
    int count = 0;
    sort(arr, arr + arrLength);
    for(int i = 0; i < arrLength; i++) {
        if(arr[i] == arr[i + 1] && i + 1 < arrLength) {
            count++;
        }
    }
 
    cout<< arrLength - count;
    return 0;
}