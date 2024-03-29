#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << abs(arr[i] - arr[i+1]) << " " << abs(arr[i] - arr[n-1]) << '\n';
        }
        else if(i == n-1) {
            cout << abs(arr[i] - arr[i-1]) << " " << abs(arr[i] - arr[0]) << '\n';
        }
        else {
            cout << min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1])) << " "
                 << max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1])) << '\n';
        }
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