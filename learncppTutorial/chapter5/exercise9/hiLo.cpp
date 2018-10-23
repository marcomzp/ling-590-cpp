#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time
#include "hiLo.h"


int randomNumber()
{
    // Initialize our mersenne twister with a random seed based on the clock
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
    
    // Create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution<> die(1, 10);
    
    return die(mersenne); // generate a roll of the die here
    
}

int result = randomNumber();


//reads number from the user



void checkInput() {
    
}



int readNumber()
{
    while (true) // Loop until user enters a valid input
    {

        int x;
        std::cin >> x;
        
        // Check for failed extraction
        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767,'\n'); // and remove the bad input
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767,'\n'); // remove any extraneous input
            
            // the user can't enter a meaningless double value, so we don't need to worry about validating that
            return x;
        }
    }
}




//int readNumber() {
  //  int n;
    //std::cin >> n;
    //return n;
//}


int restart() {
    std::cout << "Would you like to play again? (y/n): "; //ask user for a number
    char c;
    std::cin >> c;
    if (c == 'y') {
        playOnce();
    } else if (c == 'n') {
        return 0;
    } else {
        restart();
    }
    return 0;
}




void playOnce(){
    std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to  guess what it is." << std::endl << "Guess #1: ";
        int guess = readNumber();
    if (guess == result) {
        std::cout << "Correct! You win!" << std::endl;
    } else if (guess > result){
        std::cout << "Your guess is too high." << std::endl << "Guess # 2: ";
        playAgain();
    } else {
        std::cout << "Your guess is too low." << std::endl << "Guess # 2: ";
        playAgain();
    }
}

void playAgain() {
    int guess = readNumber();
    int numberOfTries = 3;
    for (int i = 0; i < 100; ++i) {
        if (guess > result) {
            std::cout << "Your guess is too high." << std::endl << "Guess #" << numberOfTries + i << ": ";
           guess = readNumber();
        } else if (guess < result) {
            std::cout << "Your guess is too low." << std::endl << "Guess #" << numberOfTries + i << ": ";
            guess = readNumber();
            std::cout << std::endl;
        } else if (guess == result) {
            std::cout << "Correct! You in!"  << std::endl;
            restart();
            break;
        }
    }
    std::cout << "Sorry, you loose. The correct answer is " << result << "." << std::endl;
    restart();
}



