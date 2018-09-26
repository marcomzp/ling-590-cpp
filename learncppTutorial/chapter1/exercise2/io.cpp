#include "io.h"
#include <iostream>

using namespace std;

//reads number from the user
int readNumber() {
    cout << "Enter a Number: "; //ask user for a number
    int n;
    cin >> n;
    return n;
}


// outputs the number
void writesAnswer(int n) {
    cout << "The result of the sum of the two numbers above is: " << n << endl;
    
}
