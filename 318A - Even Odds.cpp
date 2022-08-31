#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, x;
    cin >> n >> x;
    if(n%2 == 1) {
        if(x <= (n/2+1)) cout << x*2-1;
        else cout << (x-(n/2+1))*2;
    }
    else {
        if(x <= (n/2)) cout << x*2-1;
        else cout << (x-(n/2)) * 2;
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