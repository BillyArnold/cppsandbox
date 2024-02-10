//
//  main.cpp
//  cppsandbox
//
//  Created by Billy Arnold on 09/02/2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!" << std::endl;//cout means character output
    std::cout << "Another" << " Word\n"; // \n is better than endl because endl flushes the buffer
    //data types
    
    int x; //define variable named x that is an int
    std::cin >> x; // character input from user to go into x
    int a, b; //define 2 integers
    
    double y; // define a double
    
    int f = 5; //copy var, copied 5 to f
    int h(5); //direct var, created h with 5 already there, more performant
    return 0;
}
