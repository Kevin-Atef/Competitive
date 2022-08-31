#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;



void solve() {
    ll one{0}, two{0}, three{0};
    ll n;
    cin >> n;
    map<string, bool> o;
    map<string, bool> t;
    map<string, bool> th;
    for(ll i = 0; i < 3; i++) {
        for(ll j = 0; j < n; j++) {
            string s;
            cin >> s;
            if(i == 0) o[s] = 1;
            else if(i == 1) t[s] = 1;
            else th[s] = 1;
        }
    } 
    for(auto &i : o) {
        if(t[i.first] && th[i.first]) {
            t.erase(i.first);
            th.erase(i.first);
        }
        else if(t[i.first]) {
            two++;
            one++;
            t.erase(i.first);
        }
        else if(th[i.first]) {
            one++;
            three++;
            th.erase(i.first);
        }
        else {
            one+=3;
        }

    }
    for(auto &i : t) {
        if(th[i.first] && t[i.first]) {
            two++;
            three++;
            th[i.first] = false;
        }
        else if(t[i.first]){
            two+=3;
        }
    }
    for(auto &i : th) {
        if(th[i.first]) {
            three+=3;
        }
    }
    /*for(auto &i : t) {
        if(o[i.first] && th[i.first]) continue;
        else if(th[i.first]) {
            two++;
            three++;
        }
        else {
            two+=3;
        }
    }
    for(auto &i : th) {
        if(!o[i.first] && !t[i.first]) three+=3;
    }*/
    /*for(ll j = 0; j < n; j++) {
        
    

        
    }*/
    cout << one << " " << two << " " << three << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    //solve();

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}