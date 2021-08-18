#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int capital = 0, small = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            capital++;
        }
        else if (islower(s[i])) {
            small++;
        }
    }

    if (small > capital || small == capital) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    else if (capital > small) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}