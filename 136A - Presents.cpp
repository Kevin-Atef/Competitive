#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n{};
    cin >> n;
    ll arr[n], arrr[n+1];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arrr[arr[i]] = i+1;
    }
    for(int i = 0; i < n; i++) {
        cout << arrr[i+1] << " ";
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