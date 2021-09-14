#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll x, cnt{};
    cin >> x;
    ll arr[5]{100, 20, 10, 5, 1};
    for(int i = 0; i < 5; i++) {
        cnt += x / arr[i];
        x %= arr[i];
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