#include <iostream>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    string die[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    if(y >= w) {
        cout<<die[6-y];
    }
    else if(y < w) {
       cout<<die[6-w];
    }
}