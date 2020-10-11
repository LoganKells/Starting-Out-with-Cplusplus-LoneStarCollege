//
//  Essay.hpp
//  Project2Part2
//
//  Created by Logan Kells on 8/8/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2

#ifndef Essay_hpp
#define Essay_hpp

#include <stdio.h>
#include "GradedActivity.hpp"

// define Essay class which has public inheritance from the GradedActivity class public variables and member funcitons.
class Essay : public GradedActivity{
private:
    // Double member variable for each section of the essay that can be graded.
    double grammar; // up to 30 pts
    double spelling; // up to 20 pts
    double length; // up to 20 pts
    double content; // up to 30 pts
public:
    // setter functions will set the value of the private variables.
    void setGrammar(double g){
        grammar = g;
    }
    void setSpelling(double s){
        spelling = s;
    }
    void setLength(double l){
        length = l;
    }
    void setContent(double c){
        content = c;
    }
    // Prompt the user to inputs points received for grammar, spelling, length, and content.
    void promptUser();
    // Calculate the total score and save the score in the GradedActvitiy class.
    void totalScore();
    // Print the numeric and letter grade received by the student.
    void printScore();
};

#endif /* Essay_hpp */
