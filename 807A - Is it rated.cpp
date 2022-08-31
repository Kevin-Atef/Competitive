#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll t;
    cin >> t;
    pair<ll, ll> arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i].first >> arr[i].second;
        if(arr[i].first != arr[i].second) {
            cout << "rated";
            return;
        }
    }
    for(int i = 0; i < t; i++) {
        if(i == 0) continue;
        if(arr[i].first > arr[i-1].first) {
            cout << "unrated";
            return;
        }
    }
    cout << "maybe";
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