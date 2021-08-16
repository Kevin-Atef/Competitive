#include <iostream>
using namespace std;

int main() {
    int shovelPrice, burles;
    cin >> shovelPrice >> burles;
    int i = 0;
    int x = 0;
    int currentPrice = 0; 
    for(i = 1; i > 0; i++) {
        currentPrice = shovelPrice * i;
        x = currentPrice % 10;
        if(x == burles or x == 0) {
            break;
        }
    }
    cout << i;
    return 0;
}