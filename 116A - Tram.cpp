#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n{}, max{}, curr{};
    cin >> n;
    for(int i{0}; i < n; i++) {
        ll x{}, y{};
        cin >> x >> y;
        curr += y - x;
        if(curr > max) {
            max = curr;
        }
    } 
    cout << max << '\n';
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