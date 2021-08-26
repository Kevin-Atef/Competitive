#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    string s1{}, s2{};
    cin >> s1 >> s2;
    rep(i,0,s1.length()) {
        if(s1[i] != s2[i]) cout << '1';
        else cout << '0';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    solve();

    /*ll t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}