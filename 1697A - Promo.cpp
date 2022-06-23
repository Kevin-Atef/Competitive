#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, q;
    cin >> n >> q;
    ll items[n];
    for(ll i = 0; i < n; i++) {
        cin >> items[n];
    }
    sort(items, items+n, greater<int>());
    while(q--) {
        ll x, y, count{};
        cin >> x >> y;
        ll purchased[x];
        for(ll i = 0; i < x; i++) {
            purchased[i] = items[i];
        }
        sort(purchased, purchased+x);
        for(ll i = 0; i < y; i++) {
            count+=purchased[i];
        }
        cout << count << '\n';
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