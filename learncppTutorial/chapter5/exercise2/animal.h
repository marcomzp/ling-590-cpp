#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

enum class AnimalType {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};


struct Animal{
    AnimalType type;
    int legs;
};

void getAnimalType(Animal animal);

int printNumberofLegs(Animal animal);

#endif
