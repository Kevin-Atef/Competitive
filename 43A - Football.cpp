#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n;
    string s;
    cin >> n;
    string temp{}, temp2{};
    ll count{};
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(i == 0) temp = s, count++;
        else {
            if(s == temp) count++;
            else temp2 = s;
        }
    }
    if(count > n-count) cout << temp;
    else cout << temp2;
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