#include <iostream>
using namespace std;

int main() {
    int num{}, oi{}, count{}, officers{};
    cin >> num;
    for(int i = 0; i < num ; i++) {
        cin >> oi;
        if(oi == -1) {
            if(officers == 0) count++;
            else officers--;
        }
        else officers+= oi;
    }
    cout << count;
}