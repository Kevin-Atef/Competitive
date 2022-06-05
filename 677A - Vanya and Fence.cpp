#include <iostream>
using namespace std;

int main() {
    int number{}, height{}, bent{};
    cin >> number >> height;
    for(int ii = 0; ii < number; ii++) {
        int a{};
        cin >> a;
        if(a > height) bent++;
    }
    cout << number + bent;
}