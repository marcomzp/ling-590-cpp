#include "sum.h"
#include <iostream>

using namespace std;

//reads number from the user
int readNumber() { //reads number from the user
    cout << "Enter an integer: "; //ask user for a number
    int n;
    cin >> n;
    return n;
}


int sum(int number) { //reads number from the user
    int result = 0;
    for (int i = number; i >= 0; i--) {
        result = result + i;
    }
    cout << result << endl;
    return 0;
}


