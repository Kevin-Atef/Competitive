#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n{};
    vector<int> one, two, three;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 1) one.push_back(i);
        else if(x == 2) two.push_back(i);
        else three.push_back(i);
    }
    int x = min(one.size(), two.size());
    int y = three.size();
    x = min(x, y);
    cout << x << '\n';
    for(int i = 0; i < x; i++) {
        cout << one[i] + 1 << " " << two[i] + 1 << " " << three[i] + 1<< '\n';
    }
}