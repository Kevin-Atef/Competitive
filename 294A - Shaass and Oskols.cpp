#include <iostream>
using namespace std;

int main() {
    int lines{}, shots{};
    bool upfly{}, downfly{};
    cin >> lines;
    int birds[lines];
    for(int i = 0; i < lines; i++) {
        cin >> birds[i];
    }
    cin >> shots;
    for(int i = 0; i < shots; i++) {
        int x{}, y{};
        cin >> x >> y;
        x--;
        int initial = birds[x];

        if(x-1 == -1)
            upfly = true;
        else if(x+1 == lines)
            downfly = true;

        if(!upfly) {
            birds[x-1] += y - 1;
        }
        if(!downfly) {
            birds[x+1] += initial - y;
        }
        birds[x] = 0;
        upfly = false;
        downfly = false;
    }
    for(int i = 0; i < lines; i++) {
        cout << birds[i] << '\n';
    }
}