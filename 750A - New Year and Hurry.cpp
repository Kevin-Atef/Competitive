#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll x, n;
    cin >> x >> n;
    ll timeLeft{240 - n}, cnt{};
    for(int i = 5; timeLeft > 0; i += 5) {
        if(timeLeft >= i) {
            timeLeft -= i;
            cnt++;
        }
        else {
            break;
        }
    }
    if(cnt > x) cout << x;
    else cout << cnt;
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