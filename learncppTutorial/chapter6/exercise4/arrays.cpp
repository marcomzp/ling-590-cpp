#include "arrays.h"
#include <iostream>


int scores()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
    
    
    int maxScoreIndex = 0; // keep track of our largest score
    for (int student = 0; student <= numStudents - 1; ++student) {
        std::cout << student << '\n';
        if (scores[student] > scores[maxScoreIndex]) {
            maxScoreIndex = student;
        }
    }
    std::cout << "The best score index was " << maxScoreIndex << '\n';

    return 0;
}

