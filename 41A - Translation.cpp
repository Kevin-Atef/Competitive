#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    string s, ss;
    cin >> s >> ss;
    string tmp_s = s;
    ll n = s.length();
    rep(i,0,s.length()) {
        s[i] = tmp_s[n-1];
        n--;
    }
    if(ss == s) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    solve();

    /*int t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}