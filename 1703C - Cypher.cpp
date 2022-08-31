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
        ll x;
        cin >> x;
        for(int j = 0; j < x; j++) {
            char c;
            cin >> c;
            if(c == 'U') {
                if(arr[i] == 0) {
                    arr[i] = 9;
                }
                else {
                    arr[i]--;
                }
            }
            else {
                if(arr[i] == 9) {
                    arr[i] = 0;
                }
                else {
                    arr[i]++;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    //solve();

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}