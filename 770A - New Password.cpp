#include <iostream>
using namespace std;

int main() {
    int length, distinct;
    cin >> length >> distinct;
    char letters[distinct];
    for(int i = 0; i < distinct; i++) {
        letters[i] = 'a' + i;
    }
    for(int i = 0; i < length; i++) {
        cout<<letters[i % distinct];
    }
}