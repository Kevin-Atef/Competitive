#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b) {
    return a.second<b.second;
}

void solve() {
    ll arr[500]{};
    ll i = 0;
    do {
        arr[i] = (i*(i+1))/2;
        i++;
    } while(arr[i-1] < 500);

    ll n;
    cin >> n;
    for(ll i = 0; i < 500; i++) {
        if(arr[i] == n) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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