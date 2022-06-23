#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    while(true) {
        ll n;
        cin >> n;
        if(n==0) break;
        ll days{1}, cons{};
        ll tmpd{}, tmpy{}, tmpm{}, tmpc{}, tmpdays{};
        bool last{false}, leap{false}, newyear{false};
        for(int i = 0; i < n; i++) {
            ll d, m, y, c;
            cin >> d >> m >> y >> c;
            
            if((y%4 == 0 && y&100 != 0) || (y%400 == 0)) leap = true;
            if(d == 28 || d == 29 || d == 30 || d == 31) {
                if(m % 2 == 1) {
                    if(m == 9 || m == 12) {
                        if(d == 30) last = true;
                    }
                    else if(m != 9 && m != 12) {
                        if(d == 31) last = true;
                    }
                }
                else {
                    if(m == 2) {
                        if(leap) {
                            if(d == 29) last = true;
                        }
                        else {
                            if(d == 28) last = true;
                        }
                    }
                    else if(m == 8 || m == 10) { 
                        if(d == 31) last = true;
                    }
                    else if(m == 12) {
                        if(d == 31) newyear = true;
                    }
                    else if(m == 4 || m == 6) {
                        if(d == 30) last = true;
                    }
                }
            }
            if(!last && tmpd == d - 1 && m == tmpm && y == tmpy) days++, cons+=c-tmpc;
            else if(last && d == 1 && tmpm == m - 1) days++, cons+=c-tmpc, last = false;
            else if(newyear && d == 1 && m == 1 && tmpy == y - 1) cons+=c-tmpc, newyear = false;
            else {
                tmpdays = max(days, tmpdays);
                days = 1;
            } 
            tmpdays = max(days, tmpdays);
            tmpd = d; tmpy = y; tmpm = m; tmpc = c;
        }
        if(tmpdays == 1) tmpdays = 0;
        cout << tmpdays << ' ' << cons << '\n';
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("in", "r", stdin);
    freopen("out", "w", stdout);

    solve();

    /*ll t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}