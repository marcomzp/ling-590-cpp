#include "math.h"
#include <iostream>

using namespace std;

//reads number from the user
double readNumber() {
    cout << "Enter an interger "; //ask user for a number
    double n;
    cin >> n;
    return n;
    }


//reads char from the user
char readSymbol() {
    cout << "Enter one of the following:  +, -, *, /, or % : "; //ask user for a number
    char c;
    cin >> c;
    return c;
}


// gets two integers and depending on the symbol that the user provided, makes a calculation
int calculate(int n, int n2) {
    char symbol = readSymbol();
    int result = 0;
    switch (symbol) {
        case '+':
            result = n + n2;
            break;
        case '-':
            result = n - n2;
            break;
        case '*':
            result = n * n2;
            break;
        case '/':
            result = n / n2;
            break;
        case '%':
            result = n % n2;
            break;
        default:
            cout << "The operator that you entered is not valid. The result below does not mean anything." << endl;
            break;
    }
    return result;
}
    

