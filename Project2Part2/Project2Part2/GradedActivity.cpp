//
//  GradedActivity.cpp
//  Project2Part2
//
//  Created by Logan Kells on 8/8/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2


#include "GradedActivity.hpp"
char  GradedActivity::getLetterGrade() const{
    char  letterGrade;
    
    if (score > 89) {
        letterGrade = 'A';
    }
    else if (score > 79) {
        letterGrade = 'B';
    }
    else if (score > 69) {
        letterGrade = 'C';
    }
    else if (score > 59) {
        letterGrade = 'D';
    }
    else{
        letterGrade = 'F';
    }
    return letterGrade;
}
