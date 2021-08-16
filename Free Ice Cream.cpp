#include <iostream>
using namespace std;

int main() {
    long long int trans, cream, number, distressed = 0;
    char sign;
    cin >> trans >> cream;
    for(int i = 0; i < trans; i++) {
        cin >> sign >> number;
        if(sign == '+') {
            cream += number;
        }
        if(sign == '-') {
            if(cream >= number) {
                cream -= number;
            }
            else {
                distressed++;
            }
        }
    }
    cout << cream << " " << distressed;
    return 0;
}