#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, x;
    cin >> n >> x;
    ll arr[n*2];
    for(ll i = 0; i < n*2; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n*2);
    for(ll i = 0; i < n; i++) {
        if(arr[i+n] - arr[i] < x) {
            cout << "NO" << '\n';
            return;
        } 
    }
    cout << "YES" << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    //solve();

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}