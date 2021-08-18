#include <iostream>
#include <algorithm>
#include <initializer_list>
using namespace std;

int main() {
    int students, prog = 0, math = 0, pe = 0, teams = 0;
    cin >> students;
    int student[students], progs[students], maths[students], pes[students];
    for(int i = 0; i < students; i++) {
        cin >> student[i];
    }
    for(int i = 0; i < students; i++) {
        if(student[i] == 1) {
            progs[prog] = i + 1;
            prog++;
        }
        else if(student[i] == 2) {
            maths[math] = i + 1;
            math++;
        }
        else if(student[i] == 3) {
            pes[pe] = i + 1;
            pe++;
        }
    }
    teams = min({prog, math, pe});
    cout << teams << endl;
    for(int i = 0; i < teams; i++) {
        cout<< progs[i] << " " << maths[i] << " " << pes[i] << endl;
    }
    return 0;
}