#include <iostream>
using namespace std;

int main() {
    int numberOfProblems, petya, vasya, tonya, whoCanSolve = 0, solvedProblems = 0;
    cin >> numberOfProblems;
    for (int i = 0; i < numberOfProblems; i++) {
        whoCanSolve = 0;
        cin >> petya >> vasya >> tonya;
        if (petya == 1) {
            whoCanSolve = whoCanSolve + 1;
        }
        if (vasya == 1) {
            whoCanSolve = whoCanSolve + 1;
        }
        if (tonya == 1) {
            whoCanSolve = whoCanSolve + 1;
        }
        if (whoCanSolve >= 2) {
            solvedProblems++;
        }

    }
    cout << solvedProblems;

    return 0;
}