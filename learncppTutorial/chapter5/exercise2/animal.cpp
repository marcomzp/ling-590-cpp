#include "animal.h"
#include <iostream>
#include <string>


void getAnimalType(Animal animal){
    switch(animal.type) {
        case AnimalType::PIG:
            std::cout << "pig";
            break;
        case AnimalType::CHICKEN:
            std::cout << "chicken";
            break;
        case AnimalType::GOAT:
            std::cout << "goat";
            break;
        case AnimalType::CAT:
            std::cout << "cat";
            break;
        case AnimalType::DOG:
            std::cout << "dog";
            break;
        case AnimalType::OSTRICH:
            std::cout << "ostrich";
            break;
        default:
            std::cout << "Error." << std::endl;
            break;
    }
}

int printNumberofLegs(Animal animal){
    switch(animal.legs) {
    case 4:
            animal.legs = 4;
            break;
    case 2:
            animal.legs = 2;
        break;
    default:
            std::cout << "Error." << std::endl;
        break;
    }
    return animal.legs;
}
