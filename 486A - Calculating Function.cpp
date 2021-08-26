#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = 0; i <= b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n{};
    cin >> n;
    if(n % 2 == 0) cout << n / 2;
    else cout << -((n+1) / 2);
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