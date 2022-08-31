#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;
using ll = long long;

void solve() {
    ll n, k{};
    bool cases = true;
    cin >> n;
    if(n == 10) {
        
    }
    vector<ll> order, sortt;
    for(int i = 0; i < n; i++) {
        ll o;
        cin >> o;
        order.push_back(o);
        sortt.push_back(o);
    }
    sort(sortt.rbegin(), sortt.rend());
    vector<ll>::iterator it = order.begin();
    ll j = it - order.begin();
    while(true) {
        if(order.size() == 0) break;
        if(order[j] < sortt[k]) {
            if (cases) cout << '\n';
            else cout << '\n' << '\n';
            j++;
            cases = true;
        }
        else {
            cout << order[j] << " ";
            order.erase(order.begin()+j);
            k++;
            j = find(order.begin(), order.begin()+j, sortt[k]) - order.begin();
            cases = false;
        }
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