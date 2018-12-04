#include "sortGrades.h"
#include <iostream>


int readNumber() {
    std::cout << "How many names would you like to enter? ";
    int x;
    std::cin >> x;
    return x;
}

int readNumber2() {
    std::cout << "Student's grade: ";
    int x;
    std::cin >> x;
    return x;
}



void readName() {
    int numberOfNames = readNumber();
    std::string *nameArray = new std::string[numberOfNames];
    int *gradeArray = new int[numberOfNames];
    for (int i = 0; i < numberOfNames; i++) {
        std::cout << "Student's name: ";
        std::cin >> nameArray[i];
        std::cout << "Student's grade: ";
        std::cin >> gradeArray[i];
        
    }
    std::cout << "Here is your sorted list:" << std::endl;
    for (int startIndex = 0; startIndex < numberOfNames - 1; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we’ve encountered this iteration
        // Start by assuming the smallest element is the first element of this iteration
        int smallestIndex = startIndex;
        
        // Then look for a smaller element in the rest of the array
        for (int currentIndex = startIndex + 1; currentIndex < numberOfNames; ++currentIndex)
        {
            // If we've found an element that is smaller than our previously found smallest
            if (gradeArray[currentIndex] > gradeArray[smallestIndex])
                // then keep track of it
                smallestIndex = currentIndex;
        }
        
        // smallestIndex is now the smallest element in the remaining array
        // swap our start element with our smallest element (this sorts it into the correct place)
        std::swap(gradeArray[startIndex], gradeArray[smallestIndex]);
    }
    
    // Now that the whole array is sorted, print our sorted array as proof it works
    for (int index = 0; index < numberOfNames; ++index)
        std::cout << nameArray[index] << " got a grade of " << gradeArray[index] << "." << std::endl;
    
    delete[] gradeArray;
    delete [] nameArray;
}



