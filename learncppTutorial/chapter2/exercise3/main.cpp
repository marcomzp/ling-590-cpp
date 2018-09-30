#include <iostream>
#include "gravity.h"

using namespace std;


//this function takes an input from the user,  adds them together and then outputs it
int main() {
    double result = 0.0;
    for (int i = 0; i <= 5; i = i + 1){
       result = calculateFallenHeight(myGravity, i);
        if (result <= 0) {
        cout <<  "At " << i << " seconds, the ball on the floor." <<  endl;
        } else {
            cout <<  "At " << i << " seconds, the ball is at height: " << result << endl;
        }
    }
    return 0;
}

