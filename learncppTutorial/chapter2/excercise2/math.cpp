#include "math.h"
#include <iostream>

using namespace std;

//reads number from the user
double readNumber() {
    cout << "Enter a double value: "; //ask user for a number
    double n;
    cin >> n;
    return n;
    }


//reads char from the user
char readSymbol() {
    cout << "Enter one of the following:  +, -, *, or /: "; //ask user for a number
    char c;
    cin >> c;
    return c;
}


// gets two integers and depending on the symbol that the user provided, makes a calculation
double calculateAnswer(double n, double n2) {
    char symbol = readSymbol();
    double result = 0.0;
    if (symbol == '+'){
        result = n + n2;
    } else if (symbol == '-') {
        result = n - n2;
    } else if (symbol == '*') {
        result = n * n2;
    } else {
        result = n2/n2;
    }
    return result;
}
