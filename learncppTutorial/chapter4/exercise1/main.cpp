#include <iostream>
#include "integer.h"

using namespace std;


//this function takes an input from the user,  adds them together and then outputs it
int main() {
    int smaller = readNumber1();
    int larger = readNumber2();
    if (smaller < larger) {
      cout << "The smaller value is " << smaller << endl;
        cout << "The larger value is " << larger << endl;
        }
    else if (smaller > larger) {
        cout << "Swapping values" << endl;
        int temp;
        temp = smaller;
        cout << "The smaller value is " << larger << endl;
       cout << "The larger value is " << temp << endl;
    }
}

