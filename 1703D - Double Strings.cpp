#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    bool h{false};
    ll n;
    cin >> n;
    string arr[n];
    map<string, bool> mp;
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]] = true;
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 1; j < arr[i].length(); j++) {
            string first = arr[i].substr(0, j);
            string second = arr[i].substr(j, arr[i].length() - j);
            if(mp[first] == true && mp[second] == true) {
                cout << 1;
                h = true;
                break;
            } 
        }
        if(!h) {
            cout << 0;
        }
        if(h) h = false;
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