//
//  main.cpp
//  cppsandbox
//
//  Created by Billy Arnold on 09/02/2024.
//

#include <iostream>
#include "add.h"

// defining macros not recommended, as constants are preferred
#define MY_NAME "billy"

void doPrint(); // this is a forward declaration of a function, needed so that doprint will be identified
#if 0 //dont compile anything starting here,
//convenient way to comment out something with comments
#endif

int main(int argc, const char * argv[]) {
    std::cout << "Enter a number to be multiplied" << std::endl;//cout means character output
    //std::cout << "Another" << " Word\n"; // \n is better than endl because endl flushes the buffer
    //data types
    if (1 < 2) {
        std::cout << "1 is more than 2";
    }
    
    int x{}; //define variable named x that is an int
    std::cin >> x; // character input from user to go into x
    //int a, b; //define 2 integers
    
    std::cout << "Double that number is " << x * 2 << "\n";
    std::cout << "1 + 2 is " << add(1, 2) << "\n";
    doPrint();
    
    //double y; // define a double
    
    //int f = 5; //copy var, copied 5 to f
    //int h(5); //direct var, created h with 5 already there, more performant
    return 0;
}

// function names start with their return type
// void return type for functions that don't explicitly return anything
void doPrint() {
    std::cout << "Printing\n";
    
    for (int i = 0; i < 6; i++) {
        std::cout << "i is " << i;
    }
    
    int numbers[6] = {1, 2, 3, 4, 5, 6}; // initialise a list of 6
    for (int i: numbers) { // loop through numbers directly
        std::cout << i << "\n";
    }
}
