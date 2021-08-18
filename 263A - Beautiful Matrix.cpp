#include <iostream>
using namespace std;

int main() {
    int x, row, column, moves = 0;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 5; column++) {
            cin >> x;
            if (x == 1) {
                if (row > 3) {
                    moves = moves + (row - 3);
                }
                else if (row < 3) {
                    moves = moves + (3 - row);
                }
                else if (row == 3) {
                    moves = moves;
                }
                if (column > 3) {
                    moves = moves + (column - 3);
                }
                if (column < 3) {
                    moves = moves + (3 - column);
                }
                else if (column == 3) {
                    moves = moves;
                }
            }
        }

    }
    cout << moves;
    return 0;
}