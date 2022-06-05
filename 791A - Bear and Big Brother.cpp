#include <iostream>
using namespace std;
 
int main() {
    int bobWeight, brotherWeight, years = 0;
    cin >> bobWeight >> brotherWeight;
    while (bobWeight <= brotherWeight) {
        years = years + 1;
        bobWeight = bobWeight * 3;
        brotherWeight = brotherWeight * 2;
    }
    cout << years;
 
    return 0;
}