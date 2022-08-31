#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, ans{};
    cin >> n;
    string s;
    cin >> s;
    char tmp{};
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != tmp) {
            ans+=2;
            tmp = s[i];
        }
        else {
            ans++;
        }
    }
    cout << ans << '\n';
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