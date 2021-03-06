#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n, cnt{};
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s == "Tetrahedron")
            cnt += 4;
        else if(s == "Cube")
            cnt += 6;
        else if(s == "Octahedron")
            cnt += 8;
        else if(s == "Dodecahedron")
            cnt += 12;
        else
            cnt += 20;
    }
    cout << cnt;
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