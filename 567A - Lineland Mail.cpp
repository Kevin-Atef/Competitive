#include <iostream>
#include <algorithm>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
    fast();
    int n;
    cin >> n;
    int cord[n];
    for(int i = 0; i < n; i++) {
        cin >> cord[i]; 
    }
    for(int i = 0; i < n; i++) {
        int dis[n-1];
        int z = 0;
        for(int j = 0; j < n; j++) {
            if(j == i) {
                continue;
            }
            dis[z] = abs(cord[i] - cord[j]);
            z++;
        }
        sort(dis, dis + (n -1));
        cout << dis[0] << " " << dis[n - 2] << endl;
    }
    return 0;
}
