#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll count{};
    while(true) {
        ll n, m, c;
        cin >> n >> m >> c;
        if(n == 0 && m == 0 && c == 0) break;
        cout << ((n-7) * (m-7) + c) / 2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    solve();

    /*ll t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}