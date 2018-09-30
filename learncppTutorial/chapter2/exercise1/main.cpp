#include <iostream>
#include "prime.h"

using namespace std;


//this function takes an input from the user,  calls the doubleNumber function, which multiplies a number by two and then prints the result. 
int main() {
    cout << "Enter a single digit number: "; //ask user for a number
    int n;
    cin >> n;
    
    bool prime = isPrime(n);
   
    if (prime)
        std::cout << "The digit is prime" << std::endl;
    else
        std::cout << "The digit is not prime" << std::endl;
    return 0;
}
