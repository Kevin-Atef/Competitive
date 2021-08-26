#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll k, l, m, n, d, count{};
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }
    cout << count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

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