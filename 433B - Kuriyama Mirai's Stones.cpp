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
    ll n;
    cin >> n;
    ll arr[n];
    ll srt[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        srt[i] = arr[i];
    }
    sort(srt, srt+n);
    ll prfx[n];
    ll prfxsrt[n];
    prfx[0] = arr[0];
    prfxsrt[0] = srt[0];
    for(ll i = 1; i < n; i++) {
        prfx[i] = prfx[i-1] +arr[i]; 
        prfxsrt[i] = prfxsrt[i-1] +srt[i]; 
    }
    ll q;
    cin >> q;
    for(ll i = 0; i < q; i++) {
        ll t, l, r;
        cin >> t >> l >> r;
        if(t == 1) {
            if(l == 1) cout << prfx[r-1] << '\n';
            else cout << prfx[r-1] - prfx[l-2] << '\n';
        }
        else {
            if(l == 1) cout << prfxsrt[r-1] << '\n';
            else cout << prfxsrt[r-1] - prfxsrt[l-2] << '\n';
        }
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