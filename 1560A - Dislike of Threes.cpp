#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int arr[n];
    for(long long int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int poly[1000];
    for(long long int i = 0; i <= 1700; i++) {
        static long long int z = 0;
        if(i % 3 != 0 && i % 10 != 3) {
            if(z < 1000) {
                poly[z] = i;
                z++;
            }
        }
    }
    for(long long int i = 0; i < n; i++) {
        cout << poly[arr[i] - 1] << endl;
    }
    return 0;
}