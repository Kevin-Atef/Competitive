#include <iostream>
using namespace std;

int main() {
    int n;
    while(true) {
        cin >> n;
        if(n != 0) {
            bool light[n - 1];
            for(int i = 0; i < n; i++) {
                light[i] = false;
            }
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                    if(j % i == 0) {
                        if(light[j - 1]) {
                            light[j - 1] = false;
                        }
                        else {
                            light[j - 1] = true;
                        }
                    }
                }
            }
            if(light[n - 1]) {
                cout << "yes" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
        else {
            return 0;
        }
        
    }
    return 0;
}
