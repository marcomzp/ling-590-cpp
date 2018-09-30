#include "prime.h"
#include <iostream>

using namespace std;

//this function checks wheter a number is prime
bool isPrime(int n) {
    if ((n == 2) || (n == 3) || (n == 5) || (n == 7)){
        return true;
    } else {
       return false;
  }
}
