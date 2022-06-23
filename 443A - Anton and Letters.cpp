#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s{}, ss{};
    int count{};
    getline(cin, s);
    if(s.length() == 2) {
        cout << 0;
        return 0;
    }
    for(int i = 1; i < s.length(); i+=3) {
        ss+=s[i];
    }
    sort(ss.begin(), ss.end());
    for(int i = 0; i < ss.length(); i++) {
        if(ss[i]!=ss[i+1])count++;
    }
    cout << count;
}