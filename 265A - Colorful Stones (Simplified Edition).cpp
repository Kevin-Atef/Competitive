#include <iostream>
using namespace std;

int main() {
    string s1{}, s2;
    int j{}, count{};
    cin >> s1 >> s2;
    for(int i = 0; i < s2.length(); i++) {
        if(s2[i] == s1[j]) {
            count++;
            j++;
        }
    }
    cout << count + 1;
}   