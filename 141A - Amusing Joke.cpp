#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    string s1, s2, n;
    cin >> s1 >> s2 >> n;

    string s3{s1 + s2};

    if(s3.length() != n.length()) {
        cout << "NO";
        return;
    }

    sort(s3.begin(), s3.end());
    sort(n.begin(), n.end());
    
    for(int i = 0; i < s3.length(); i++) {
        if(s3[i] != n[i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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