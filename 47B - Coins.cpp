#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

bool myComparison(const pair<char,int> &a, const pair<char,int> &b) {
    return a.second<b.second;
}

void solve() {
    map<char, int> mp;
    mp['A'] = 1;
    mp['B'] = 1;
    mp['C'] = 1;
    for(ll i = 0; i < 3; i++) {
        string s;
        cin >> s;
        
        if(s[1] == '<') {
            mp[s[2]] ++;
            mp[s[0]]--; 
        }
        else {
            mp[s[0]] ++;
            mp[s[2]]--;
        }
    }
    vector<pair<char,int>> arr;
    for(auto &i : mp) {
        arr.push_back(i);
    }
    
    sort(arr.begin(), arr.end(), myComparison);

    if( (arr[0].second == arr[1].second) || (arr[0].second == arr[2].second) || (arr[1].second==arr[2].second)) {
        cout << "Impossible";
        return;
    }
        for(auto&i:arr) {
            cout << i.first;
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
