#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    long long step, mod, i, count{1}, res{};
    while(cin >> step) {
        res = 0;
        count = 1;
        cin >> mod;
        for(i = 0; i < mod; i++) {
            res = (res+step) % mod;
            if(res != 0)
                count++;
        }
        string good = "Good Choice";
        string bad = "Bad Choice";
        cout << setw(10) << step << setw(10) << mod;
        if(mod == count) {
            for(int i = 0; i < 4; i++) cout << ' ';
            cout << good << '\n' << '\n';
        }
        else {
            for(int i = 0; i < 4; i++) cout << ' ';
            cout << bad << '\n' << '\n';
        } 
    }
}