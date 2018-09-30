#include <iostream>
#include "math.h"

using namespace std;


//this function takes an input from the user,  adds them together and then outputs it
int main() {
    double n1;
    double n2;
//    char s;
    double result = 0.0;
    n1 = readNumber();
    n2 = readNumber();
//    s = readSymbol();
    result = calculateAnswer(n1, n2);
    cout << "This is the result: " << result << endl;;
    return 0;
}
