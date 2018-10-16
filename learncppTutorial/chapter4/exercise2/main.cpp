#include <string>
#include <iostream>
#include "nameAndAge.h"


int main()
{
    std::string name = readName();
    std::string age = readAge();
    double len = name.length();
    double ageNumber = std::stod(age);
    
    std::cout << "Your name is " << name << " and you've lived " << ageNumber/len << " years for each letter of your name." << std::endl;
}
