#include <iostream>
using namespace std;

int main() {
    int column, cubes[100];
    cin >> column; //This takes the first line input and assigns it to column

    for(int i = 0; i < column; i++) { //This for loop is for taking in second line input and turing it into an array
        cin >> cubes[i];   
    }

    //The sorting algorithm
    for (int last = column - 1; last < column && last != -1; last--) { //This for loop cycles through last columns in the array (column - 1 because array starts with index 0)
        for (int first = 0; first < column && first < last; first++) { //This for loop cycles through first columns in the array
            if (cubes[first] > cubes[last]) { //If first column has more cubes than the last column, the first column cubes will be pushed to the last column
                int difference = cubes[first] - cubes[last]; //Difference between first column cubes and last column cubes
                cubes[first] = cubes[first] - difference; 
                cubes[last] = cubes[last] + difference; 

            }
        }
    }

    for (int i = 0; i < column; i++) { //This for loop is for printing out the array with spaces
        cout << cubes[i] << " ";
    }
    return 0;
}