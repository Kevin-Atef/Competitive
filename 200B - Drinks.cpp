#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n{};
    double sum{};
    cin >> n;
    double arr[n];
    rep(i,0,n) {
        cin >> arr[i];
        sum += arr[i] / 100;
    }
    cout << (sum / n) * 100;
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