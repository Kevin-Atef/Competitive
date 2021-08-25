#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    ll k{0};
    rep(i,0,s.length()) {
        if(s[i] == '7' || s[i] == '4') k++;
    }
    if(k == 4 || k == 7) cout << "YES" << '\n';
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