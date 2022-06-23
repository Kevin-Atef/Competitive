#include <iostream>
using namespace std;

int main() {
    int needed, time, once, build, ovenTime{}, init{};
    cin >> needed >> time >> once >> build;
    ovenTime = (needed + once - 1)/once;
    int o1 = 0;
    int o2 = build;
    for(int i = 0; i < ovenTime; i++) {
        if(o1 <= o2) o1 += time;
        else o2+=time;
    }
    int twoOvenTime = max(o1,o2);
    if(twoOvenTime < (ovenTime*time)) cout << "YES";
    else cout << "NO";
}