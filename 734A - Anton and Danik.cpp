#include <iostream>
using namespace std;

int main() {
    int numOfGames, danik = 0, anton = 0;
    cin >> numOfGames;
    string winner;
    cin >> winner;
    for (int i = 0; i < numOfGames; i++) {
        if (winner[i] == 'D') {
            danik = danik + 1;
        }
        else if (winner[i] == 'A') {
            anton = anton + 1;
        }
    }
    if (danik > anton) {
        cout << "Danik";
    }
    else if(anton > danik) {
        cout << "Anton";
    }
    else if(anton == danik) {
        cout << "Friendship";
    }

    return 0;
}