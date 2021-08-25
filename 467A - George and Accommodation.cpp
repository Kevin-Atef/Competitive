#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n, cnt{0};
    cin >> n;
    rep(i,0,n) {
        ll x, y;
        cin >> x >> y;
        ll diff = y - x;
        if(diff >= 2) cnt++;
    }
    cout << cnt;
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