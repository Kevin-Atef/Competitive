#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {  
    ll n, count{}, tmp{};
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 0; i < n; i++) {
        tmp = 1;
        ll current = arr[i];
        for(ll j = i+1; j < n; j++) {
            if(j == i) continue;
            if(current >= arr[j]) {
                tmp++;
                current = arr[j];
            }
            else break;
        }
        current = arr[i];
        for(ll j = i - 1; j >= 0; j--) { 
            if(j == i) continue;
            if(current >= arr[j]) {
                tmp++;
                current = arr[j];
            }
            else break;
        }
        count = max(count, tmp);
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