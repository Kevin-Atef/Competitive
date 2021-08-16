#include <iostream>
using namespace std;

int main() {
    int x;
    int count = 0;
    cin >> x;
    int home[x], guest[x];
    for(int i = 0; i < x; i++) {
        cin >> home[i] >> guest[i]; 
    }
    for(int host = 0; host < x; host++) {
        for(int j = 0; j < x; j++) {
            if(j==host) {
                continue;
            }
            else{
                if(home[host] == guest[j]) {
                    count++;
                }
            }
        }
    } 
    cout << count;
    return 0;
}