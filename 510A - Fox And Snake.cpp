#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n, m;
    cin >> n >> m;
    bool left{true}, finish{false};
    for(int i = 0; i < n; i++) {
        finish = false;
        if(i == 0 || i % 2 == 0) {
            for(int j = 0; j < m; j++)
                cout << '#';
        }
        else {
            for(int j = 0; j < m; j++) {
                if(j == 0 && !left && !finish) {
                    cout << '#'; 
                    left = true;
                    finish = true;
                }
                else if(j == m - 1 && left && !finish) {
                        cout << '#';
                        left = false;
                        finish = true;
                }
                else
                    cout << '.';
            }
        }
        cout << '\n';
    }
}

int main() {
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

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