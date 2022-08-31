#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, m, count{};
    cin >> n >> m;
    pair<int, int> arr[m];
    for(int i = 0; i < m; i++) {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr, arr+m, greater<>());
    ll j = 0;
    while(n>0) {
        if(arr[j].second == 0) {
            j++;
        }
        if(j>m-1) break;
        if(n >= arr[j].second) {
            count+=arr[j].first*arr[j].second;
            n-=arr[j].second;
            arr[j].second=0;
        }
        else {
            count+=arr[j].first*n;
            break;
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