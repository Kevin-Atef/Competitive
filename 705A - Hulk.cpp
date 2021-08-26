#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n{};
    cin >> n;
    rep(i,1,n) {
        if(i == n) {
            if(i % 2 == 0) cout << "I love it";
            else cout << "I hate it";
            return;
        }
        if(i % 2 == 1) cout << "I hate that ";
        else cout << "I love that ";
    }
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