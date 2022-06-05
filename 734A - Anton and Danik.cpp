#include <iostream>
using namespace std;

int main() {
    int number{}, anton{}, danik{};
    cin >> number;
    for(int ii = 0; ii < number; ii++) {
        char letter{};
        cin >> letter;
        if(letter == 'A') anton++;
        else danik++; 
    }
    if(anton > danik) cout << "Anton";
    else if (anton < danik) cout << "Danik";
    else cout << "Friendship";
    
}