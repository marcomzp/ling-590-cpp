#include "even.h"
#include <iostream>
#include <string>


int even() {
    for (int i = 0; i <= 20; i++) {
        if ( i % 2 == 0) {
            std::cout << i << std::endl;
            
        }
    }
    return 0;
}
