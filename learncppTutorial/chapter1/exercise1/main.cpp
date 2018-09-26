#include <iostream>
#include "doublenumber.h"

using namespace std;


//this function takes an input from the user,  calls the doubleNumber function, which multiplies a number by two and then prints the result. 
int main() {
    cout << "Enter a Number: "; //ask user for a number
    int n;
    cin >> n;
    cout << doubleNumber(n) << endl;
    return 0;
}
