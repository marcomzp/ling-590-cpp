#include "binary.h"
#include <iostream>

using namespace std;

//reads number from the user
int readNumber() { //reads number from the user
    cout << "Enter a number from 1 to 128: "; //ask user for a number
    double n;
    cin >> n;
    return n;
    }


//converts number to binary
int calculateBinary(int n) {
    int dOne = 0;
    int dTwo = 0;
    int dThree = 0;
    int dFour = 0;
    int dFive = 0;
    int dSix = 0;
    int dSeven = 0;
    int dEight = 0;
    if (n >= 128)
    {
        dOne = 1;
        n = n - 128;
    }
    if (n >= 64) {
        dTwo = 1;        n = n - 64;
    }
    if (n > 32) {
        dThree = 1;
        n = n - 32;
    }
    if (n >= 16) {
        dFour = 1;
        n = n - 16;
    }
    if (n >= 8) {
        dFive = 1;
        n = n - 8;
    }
    if (n >= 4) {
        dSix = 1;
        n = n - 4;
    }
    if (n >= 2) {
        dSeven = 1;
        n = n - 2;
    }
    if (n >= 1) {
        dEight = 1;
    }
    cout << dOne << dTwo << dThree << dFour << " " << dFive << dSix << dSeven << dEight << endl;
    return 0;
}


