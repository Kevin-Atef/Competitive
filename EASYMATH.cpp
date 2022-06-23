#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;
ll lcm(ll a, ll b) {
    return a*b/__gcd(a,b);
}
void solve() {
    ll n, m, a, d, count{}, operations{}, countn{};
    vector<ll> divise;
    cin >> n >> m >> a >> d;
    for(int i1 = 0; i1 < 2; i1++)
        for(int i2 = 0; i2 < 2; i2++)
            for(int i3 = 0; i3 < 2; i3++)
                for(int i4 = 0; i4 < 2; i4++)
                    for(int i5 = 0; i5 < 2; i5++) {
                        divise.clear(); operations = 0;
                        if(i1) divise.push_back(a), operations++;
                        if(i2) divise.push_back(a+d), operations++;
                        if(i3) divise.push_back(a+2*d), operations++;
                        if(i4) divise.push_back(a+3*d), operations++;
                        if(i5) divise.push_back(a+4*d), operations++;
                        if(operations == 0) continue;
                        ll lcmm = divise[0];
                        if(operations > 1) {
                            for(int i = 0; i < divise.size() - 1; i++) {
                                lcmm = lcm(lcmm, divise[i+1]);
                            }
                        }
                        int sign = (operations % 2 == 1);
                        if(!sign) sign = -1;
                        
                        count+= sign * (m/lcmm);
                    }
    for(int i1 = 0; i1 < 2; i1++)
        for(int i2 = 0; i2 < 2; i2++)
            for(int i3 = 0; i3 < 2; i3++)
                for(int i4 = 0; i4 < 2; i4++)
                    for(int i5 = 0; i5 < 2; i5++) {
                        divise.clear(); operations = 0;
                        if(i1) divise.push_back(a), operations++;
                        if(i2) divise.push_back(a+d), operations++;
                        if(i3) divise.push_back(a+2*d), operations++;
                        if(i4) divise.push_back(a+3*d), operations++;
                        if(i5) divise.push_back(a+4*d), operations++;
                        if(operations == 0) continue;
                        ll lcmm = divise[0];
                        if(operations > 1) {
                            for(int i = 0; i < divise.size() - 1; i++) {
                                lcmm = lcm(lcmm, divise[i+1]);
                            }
                        }
                        int sign = (operations % 2 == 1);
                        if(!sign) sign = -1;
                        
                        countn+= sign * ((n-1)/lcmm);
                    }

    count -= countn;
    count = abs((m-n+1) - count);
    cout << count << '\n';

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