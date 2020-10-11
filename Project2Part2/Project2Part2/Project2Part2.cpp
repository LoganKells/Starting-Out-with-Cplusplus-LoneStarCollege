//
//  main.cpp
//  Project2Part2
//
//  Created by Logan Kells on 8/8/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2


#include <iostream>
#include "Essay.hpp"

int main(int argc, const char * argv[]) {
    // Create an essay class
    Essay essay;
    
    // Prompt the user for points for each category
    essay.promptUser();
    
    // calculate the total score
    essay.totalScore();
    
    // Print the numeric and letter grade received by the student.
    essay.printScore();
    
}
