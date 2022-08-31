#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    bool prime{true};
    ll n, x;
    cin >> n >> x;
    ll k = n+1;
    while(true) {
        prime = true;
        for(int i = 2; i <= k/2; i++) {
            if(k%i == 0) {
                prime = false;
                break;
            }
        }
        if(prime) break;
        k++;
    }
    if(k == x) cout << "YES";
    else cout << "NO";
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