#include "print.h"
#include <iostream>


void print(const char *str) {
    while (*str != '\0') {
        std::cout << *str;
        ++str;
    }
}

