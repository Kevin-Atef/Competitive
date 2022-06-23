#include <iostream>
using namespace std;

int main() {
    long long int n{}, x{}, count{}, ice{};
    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        char sign;
        cin >> sign >> ice;
        if(sign == '+') x+= ice;
        else {
            if(ice > x) count++;
            else x-=ice;
        }
    }
    cout << x << " " << count;
}