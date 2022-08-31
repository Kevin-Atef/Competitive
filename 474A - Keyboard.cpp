#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char shift;
    cin >> shift;
    string ss;
    cin >> ss;
    for(int i = 0; i < ss.length(); i++) {
        ll index = find(s.begin(), s.end(), ss[i]) - s.begin();
        if(shift == 'R') cout << s[index - 1];
        else cout << s[index + 1];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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