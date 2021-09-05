#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    ll n, cnt{};
    cin >> n;
    char s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        s[i] = tolower(s[i]);
    }
    sort(s, s + n);
    for(int i = 0; i < n; i++) {
        if(i != n - 1 && s[i] != s[i + 1]) {
            cnt++;
        }
        else if(i == n - 1 && s[i] != s[i - 1]) {
            cnt++;
        }
    }
    if(cnt == 26) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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