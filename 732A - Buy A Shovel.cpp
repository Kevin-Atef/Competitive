#include <iostream>
using namespace std;

int main() {
    int n{}, change{}, sol{1};
    cin >> n >> change;
    int nn = n;
    while(nn % 10 != change && nn % 10 != 0) {
        sol++;
        nn = n * sol;
    }
    cout << sol;
}