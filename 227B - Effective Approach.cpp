#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b) {
    return a.second<b.second;
}

void solve() {
    ll start{}, end{};
    ll n;
    cin >> n;
    unordered_map<int, int> mp;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        mp[x] = i;
    }
    ll q;
    cin >> q;
    for(ll i = 0; i < q; i++) {
        ll x;
        cin >> x;
        ll index = mp[x];
        start+=index+1;
        end+=n-index;
    }
    cout << start << " " << end;
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