#include "nameAndAge.h"
#include <iostream>
#include <string>



//reads number from the user
std::string readAge() { //reads number from the user
    std::cout << "Now enter your age: ";
    std::string age;
    std::getline(std::cin, age); // read a full line of text into age
    return age;

}


std::string readName() { //reads string from the user
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    return name;
    
    
}


