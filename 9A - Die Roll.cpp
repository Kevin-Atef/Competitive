#include <iostream>
using namespace std;

int main() {
    int a{}, b{};
    string frac[7] = {"0/1", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin >> a >> b;
    int c = max(a,b);
    cout << frac[7-c];

}