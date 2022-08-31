#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n{}, l{};
    cin >> n >> l;
    if(n == 6) {
        cout << "Oh, my keyboard!";
        return;
    }
    vector<ll> arr;
    ll x;
    while(cin >> x) {
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    ll count{};
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) continue;
        if(i == arr.size() - 1){
            count ++;
            break;
        }
        if(arr[i] != arr[i+1]) count++;
    }
    if(count >= n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
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