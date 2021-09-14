#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll r, b;
    cin >> r >> b;
    ll fash{min(r, b)};
    cout << fash << " ";
    cout << ( max(r, b) - fash ) / 2;
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