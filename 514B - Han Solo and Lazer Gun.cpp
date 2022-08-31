#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, cnt{};
    long double x, y;
    cin >> n >> x >> y;
    long double arr[n];
    for(ll i = 0; i < n; i++) {
        long double xx, yy;
        cin >> xx >> yy;
        if(xx-x == 0) { arr[i] = 100000000; continue;};
        arr[i] = (yy-y)/(xx-x);
    }
    sort(arr, arr+n);
    for(ll i = 0; i < n; i++) {
        if(arr[i] != arr[i+1]) cnt++;
    }
    cout << cnt;
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