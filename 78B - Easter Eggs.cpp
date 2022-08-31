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
    string s = "ROYGBIV";
    ll n;
    cin >> n;
    for(ll i = 7; i < n; i++) {
        s+=s[i-4];
    }
    cout << s;
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