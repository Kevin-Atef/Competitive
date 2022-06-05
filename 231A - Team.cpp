#include <iostream>
using namespace std;

int main() {
    int number{}, views{}, sol{};
    cin >> number;
    for(int ii = 0; ii < number; ii++) {
        int a{}, b{}, c{};
        cin >> a >> b >> c;
        views = a + b + c;
        if(views >= 2) sol++;
    }
    cout << sol;
}