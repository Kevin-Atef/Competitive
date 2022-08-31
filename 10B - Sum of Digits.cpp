#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    string n;
    cin >> n;
    ll sum{}, count{};

    if(n.length() == 1) {cout << 0; return;}
    loop:
    for(ll i = 0; i < n.length(); i++) {
        sum += (n[i]-'0');;
    }

    if(to_string(sum).length() > 1) {
        count++;
        n = to_string(sum);
        sum = 0;
        goto loop;
    }
    else {
        count++;
        cout << count;
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