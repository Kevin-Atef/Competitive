#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    bool diag{true};
    ll x;
    cin >> x;
    ll n = x*x;
    char arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i+=x) {
        char l = arr[1];
        static int j = 0;
        if(arr[j+i] != arr[abs(x-j-1)+i]) {
            diag = false;
            break;
        }
        if(arr[j+i] != arr[0]) {
            diag = false;
            break;
        }
        for(int k = 0; k < x; k++) {
            if(k == j || k == abs(x-j-1)) {
                continue;
            }
            if(arr[k+i] != l || arr[k+i] == arr[0]) {
                diag = false;
                break;
            }
        }
        j++;
    }
    if(!diag) { 
        cout << "NO";
        return;
    }
    else {
        cout << "YES";
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