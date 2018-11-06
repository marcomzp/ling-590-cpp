#include "arrays.h"
#include <iostream>


int readNumber() {
    std::cout << "Please insert a number: ";
    int x;
    std::cin >> x;
    if (std::cin.fail())
    {
        std::cin.clear(); // reset any error flags
        std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
    }
  //  std::cout << "You have entenred :" << x << std::endl;
    return x;
}

//{
    
  //  std::cout << "Please insert a number: ";
    
   // while (true) // Loop until user enters a valid input
   // {
        
     //   int x;
       // std::cin >> x;
       // if (x >= 1 && x <= 9) {
         //   std::cout << "you have entered " << x << std::endl;
        //    return x;
       // } else {
         //   std::cout << "please try again "< std::endl;
           // readNumber();
      //  }
       // return x;
   // }
// }




int printArray()
{
    int num = readNumber();
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    const int arrayLen = sizeof(array) / sizeof(array[0]);
    if (num >= 1 && num <= 9) {
        std::cout << "This is the whole array:" << '\n';
        for (int i = 0; i <= arrayLen - 1; ++i) {
            std::cout << array[i] << '\n';
        }
        std::cout << "This is the element you have entenred:" <<'\n'<< array[num - 1] << '\n';
    } else {
        std::cout << "Please enter a number between 1 and 9" << '\n';
        printArray();
    }
    return 0;
}

