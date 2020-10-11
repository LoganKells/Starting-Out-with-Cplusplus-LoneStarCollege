//
//  Essay.cpp
//  Project2Part2
//
//  Created by Logan Kells on 8/8/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2

#include <iostream>
#include "Essay.hpp"

// Prompt the user to inputs points received for grammar, spelling, length, and content.
void Essay::promptUser(){
    // Initialize points at 0 for all categories.
    double grammar_ = 0;
    double spelling_ = 0;
    double length_ = 0;
    double content_ = 0;
    // Prompt the user for their inputs for points for each category.
    std::cout << "Enter points for GRAMMAR: ";
    std::cin >> grammar_;
    std::cout << "Enter points for SPELLING: ";
    std::cin >> spelling_;
    std::cout << "Enter points for LENGTH: ";
    std::cin >> length_;
    std::cout << "Enter points for CONTENT: ";
    std::cin >> content_;
    
    // Set the values entered by the user for each category.
    setGrammar(grammar_);
    setSpelling(spelling_);
    setLength(length_);
    setContent(content_);
}
// Calculate the total score and save the score in the GradedActvitiy class.
void Essay::totalScore(){
    // Call the inherited parent function setScore(s) to set the score in the GradedActvitiy class.
    setScore(grammar + spelling + length + content);
}
// Print the numeric and letter grade received by the student.
void Essay::printScore(){
    // Call the GradedActivity inherited function getScore() to return the score.
    std::cout << "Total Score: " << getScore() << std::endl;
    // Call the GradedActivity inherited function getLetterGrade() to return the
    // appropriate letter grade.
    std::cout << "Letter Grade: " << getLetterGrade() << std::endl;
}
