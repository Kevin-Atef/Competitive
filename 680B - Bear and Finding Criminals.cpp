#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, x, count{};
    cin >> n >> x;
    bool arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(arr[x-1]) count++;
    for(int i = 1; i <= n; i++) {
        if(x+i > n && x-i < 1) continue;
        if(x+i <= n && x-i >= 1) {
            if(arr[x+i-1] && arr[x-i-1]) count+=2;
        }
        else if(x+i <= n) {
            if(arr[x+i-1]) count++;
        }
        else if(x-i >= 1) {
            if(arr[x-i-1]) count++;
        }
    }
    cout << count;
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