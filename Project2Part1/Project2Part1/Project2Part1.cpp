//
//  main.cpp
//  Project2Part1
//
//  Created by Logan Kells on 8/3/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2

/* Project 2, Part 1 Requirements:
 Design a class  called Numbers that can be used to translate integers  in the range 0 to 9999 into an English description of the number.

 The class  should have a single integer  member variable :

 int  number;

 and a static  array  of string  objects  that specify how to translate the number into the desired format. For example, you might use static  string  arrays  such as:

 string  lessThan20[20] = {"zero", "one", ..., "eighteen", "nineteen"};
 string  hundred = "hundred";
 string  thousand = "thousand";

 The class  should have a constructor  that accepts a non-negative integer  and uses it to initialize  the Numbers object . It should have a member function, print(), that prints the English description of the Numbers object .

 Demonstrate the class  in a main program  that prompts the user to input a number and then prints out its English description. 
 
 */

#include <iostream>
#include "Numbers.hpp"

int main(int argc, const char * argv[]) {
    //prompt the user to enter a number
    int num;
    std::cout << "Please enter the integer to convert: ";
    std::cin >> num;
    
    // Call the class constructor for Numbers
    Numbers numClass(num);
    
    // Print the results
    numClass.print();
    
    return 0;
}
