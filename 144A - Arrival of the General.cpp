#include <bits/stdc++.h>
#define rep(i,a,b) for (int i{a}; i < b; i++)

using namespace std;
using ll = long long;

void solve() {
    int n, max{}, min{100}, maxI{}, minI{}, cnt{};
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            maxI = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            minI = i;
        }
        if(arr[i] == min)
            minI = i;
    }

    while(arr[0] != max) {
        if(maxI - 1 == minI) minI = maxI;
        swap(arr[maxI], arr[maxI - 1]);
        cnt++;
        maxI--;
    }
    while(arr[n - 1] != min) {
        swap(arr[minI], arr[minI + 1]);
        cnt++;
        minI++;
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("a.in", "r", stdin);
    //freopen("", "w", stdout);

    solve();

    /*ll t;
    cin >> t;
    while(t--) {
        solve();
    }*/

    return 0;
}