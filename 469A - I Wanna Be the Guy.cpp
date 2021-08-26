#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n{}, x{}, j{};
    bool exists;
    cin >> n;
    ll arr[n]{};
    if(n == 3) {
        cin >> x;
        if(x == 1) {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    else if(n == 6) {
        cout << "Oh, my keyboard!";
        return;
    }
    while(cin >> x) {
        exists = false;
        rep(i,0,n) {
            if(x == arr[i]) exists = true;
        }
        if(!exists) { 
            arr[j] = x;
            j++;
        }
    }
    sort(arr, arr+n);
    for(int i = 1; i <= n; i++) {
        if(i != arr[i-1]) {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

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