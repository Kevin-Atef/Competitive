#include <iostream>
using namespace std;

int main() {
    int num{}, count{};
    string s{};
    cin >> num >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i+1]) count++;
    }
    cout << count;
}