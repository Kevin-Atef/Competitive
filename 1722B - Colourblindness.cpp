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
    ll n;
    cin >> n;
    string s{}, ss{};
    cin >> s >> ss;
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'G') {
            s[i] = 'B';
        }
        if(ss[i] == 'G') {
            ss[i] = 'B';
        }
    }
    if(ss == s) cout << "YES" << '\n';
    else cout << "NO" << '\n';

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