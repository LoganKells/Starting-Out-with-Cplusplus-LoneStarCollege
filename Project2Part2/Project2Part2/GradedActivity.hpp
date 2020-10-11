//
//  GradedActivity.hpp
//  Project2Part2
//
//  Created by Logan Kells on 8/8/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2


#ifndef GradedActivity_hpp
#define GradedActivity_hpp

#include <stdio.h>

// GradedActivity Class Provided by professor
class  GradedActivity{
private:
    double score;
public:
    GradedActivity(){
        score = 0.0;
    }
    GradedActivity(double s){
        score = s;
    }
    void setScore(double s){
        score = s;
    }
    double  getScore() const{
        return score;
    }
    char  getLetterGrade() const;
    };

#endif /* GradedActivity_hpp */
