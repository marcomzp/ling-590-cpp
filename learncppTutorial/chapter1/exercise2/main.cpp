#include <iostream>
#include "io.h"

using namespace std;


//this function takes an input from the user,  adds them together and then outputs it
int main() {
    int x;
    int y;
    int z;
    x = readNumber();
    y = readNumber();
    z = x + y;
    writesAnswer(z);
    return 0;
}
