#include <iostream>
using namespace std;

int main() {
    string s{};
    int count{};
    bool cap{};
    cin >> s; 
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 65 && s[i] <= 90) count++;
    }
    if(count > (s.length() - count)) cap = true;
    else cap = false;

    if(cap) {
        for(int i = 0; i < s.length(); i++) {
            cout << char(toupper(s[i]));
        }
    }
    else {
        for(int i = 0; i < s.length(); i++) {
            cout << char(tolower(s[i]));
        }
    }
}