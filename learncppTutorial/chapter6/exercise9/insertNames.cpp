#include "insertNames.h"
#include <iostream>


//this function asks the user to enter a name
std::string readName() {
    std::cout << "Please enter a name: ";
    std::string x;
    std::cin >> x;
    return x;
}


//if the name is in the string created in this function, it returns a message saying that it was found. if the name is not, it returns a message saying it was not found.
bool findName() {
    
    std::string userName = readName();
    std::string names[8] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    bool found(false);
    for (const auto &name : names) {
        if (name == userName) {
            found = true;
            break;
         }
    }
    if  (found) {
        std::cout << userName << " was  found." << std::endl;
    } else {
            std::cout << userName << " was not found." << std::endl;
        }
    return true;
    }


