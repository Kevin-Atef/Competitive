#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    if(s.length() < 3) { 
        cout << s;
        return;
    }
    for(int i = 0; i < int(s.length())-2; i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            s.erase(s.begin()+i, s.begin()+i+3);
            if(i!=0 && s[i-1] != ' ') {
                s.insert(s.begin()+i, 1, ' ');
            }
            i=i-1;
        }
    }
    cout << s;
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