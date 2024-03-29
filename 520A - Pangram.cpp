#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, ans{};
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    for(int i = 0; i < n; i++) {
        if(s[i] != s[i+1] && i+1 < n) ans++;
    }
    if(ans == 25) cout << "YES";
    else cout << "NO";
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