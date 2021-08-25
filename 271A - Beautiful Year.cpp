#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    int d4 = (n / 1000) % 10, d3 = (n / 100) % 10, d2 = (n / 10) % 10, d1 = n % 10;
    do {
        n++;
        d4 = (n / 1000) % 10, d3 = (n / 100) % 10, d2 = (n / 10) % 10, d1 = n % 10;
    } while(d1 == d2 || d2 == d3 || d3 == d4 || d1 == d4 || d2 == d4 || d1 == d3);
    cout << n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    solve();

    /*int t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}