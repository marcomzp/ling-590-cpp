#include <iostream>
#include "math.h"

using namespace std;


//this function takes an input from the user,  adds them together and then outputs it
int main() {
    int n1;
    int n2;
//    char s;
    int result = 0.0;
    n1 = readNumber();
    n2 = readNumber();
//    s = readSymbol();
    result = calculate(n1, n2);
    cout << "This is the result: " << result << endl;;
    return 0;
}
