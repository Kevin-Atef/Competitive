#include <iostream>
using namespace std;

int main() {
    int n{}, b{}, d{}, waste{}, count{};
    cin >> n >> b >> d;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a <= b) {
            waste+= a;
            if(waste > d) {
                waste = 0;
                count++;
            }
        }
    }
    cout << count;
}