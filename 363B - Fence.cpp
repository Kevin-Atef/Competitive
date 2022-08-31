#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b) {
    return a.second<b.second;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll prfx[n]{};
    prfx[0] = arr[0];
    for(ll i = 1; i < n; i++) {
        prfx[i] = prfx[i-1] + arr[i];
    }

    ll min = prfx[0+k-1];
    ll index{};
    for(ll i = 1; i <= n-(k); i++) {
        if(min > prfx[i+k-1]-prfx[i-1]) {
            min = prfx[i+k-1]-prfx[i-1];
            index = i;
        }
    }
    cout << index+1;
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