#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, ans{};
    cin >> n;
    ll arr[n], sum[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
        if(i == 0) sum[i] = arr[i];
        else sum[i] = sum[i-1] + arr[i];
    }
    for(int i = n-1; i > -1; i--) {
        ll summ{0};
        for(int j = i; j < n; j++) {
            summ+=arr[j];
        }
        ans++;
        if(summ > sum[i-1]) break;
        
    }
    cout << ans;
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