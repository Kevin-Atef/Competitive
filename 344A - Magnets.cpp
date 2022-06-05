#include <iostream>

using namespace std;

int main() {   
    int num{}, mag{}, tmpMag{}, count{};
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> mag;
        if(tmpMag != mag) count++;
        tmpMag = mag;
    }
    cout << count;
}