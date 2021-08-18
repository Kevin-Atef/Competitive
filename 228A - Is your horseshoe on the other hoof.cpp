#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int shoe[4];
    cin>>shoe[0]>>shoe[1]>>shoe[2]>>shoe[3];
    int count = -1;
    int n = sizeof(shoe) / sizeof(shoe[0]);
    sort(shoe, shoe + n);
    for(int i = 3; i != -1; i--) {
        if(i == 0) {
            count++;
        }
        else if(shoe[i] == shoe[i-1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}