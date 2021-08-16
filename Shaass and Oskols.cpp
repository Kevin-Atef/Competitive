#include <iostream>
using namespace std;

int main() {
    int wires;
    cin >> wires;
    int bird[wires];
    for(int i = 0; i < wires; i++) {
        cin >> bird[i];
    }
    int kill;
    cin >> kill;
    for(int i = 0; i < kill; i++) {
        int x, y;
        cin>>x>>y;
        x--;
        if(x != 0) {
            bird[x-1] += y - 1; 
        }
        if(x != wires - 1) {
            bird[x+1] += bird[x] - y;
        }
        bird[x] = 0;
    }
    for(int i = 0; i < wires; i++) {
        cout<<bird[i]<<endl;
    }
    return 0;
}