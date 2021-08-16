#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int card[x];
    for(int i = 0; i < x; i++) {
        cin >> card[i];
    }

    int s = 0, d = 0;
    bool turn = true;
    int l = 0, r = x - 1;

    while(l <= r) {
        if(card[l] >= card[r]) {
            if(turn) {
                s+=card[l];
                turn = false;
                l++;
            }
            else if(!turn) {
                d+=card[l];
                turn = true;
                l++;
            }
        }
        else if(card[r] >= card[l]) {
            if(turn) {
                s+=card[r];
                turn = false;
                r--;
            }
            else if(!turn) {
                d+=card[r];
                turn = true;
                r--;
            }
        }
    } 
    
    cout << s << " " << d;
    return 0;
}