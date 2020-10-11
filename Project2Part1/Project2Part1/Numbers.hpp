//
//  Numbers.hpp
//  Project2Part1
//
//  Created by Logan Kells on 8/3/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2

#ifndef Numbers_hpp
#define Numbers_hpp

#include <stdio.h>
#include <string>

// Declare the Numbers class
class Numbers {
private:
    // variable that will be converted to english description.
    int number;
    // English description variable
    std::string engNumber;
    
    // This array is useful to automatically set the english translation using a loop for numbers >=0 and <20.
    std::string  lessThan20[20] = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen","seventeen", "eighteen", "nineteen"
    };
    // This array is useful to automatically set the english translation using a loop for numbers >=20 and <=99.
    std::string tens[8] = {
        "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
public:
    // Class constructor accepting an int
    Numbers(int i);

    // function that returns number <20
    std::string belowTwenty(int);
    
    // function for numbers >=20 and <=99
    std::string belowHundred(int);
    
    // function for number >=100 and <=999
    std::string belowThousand(int);
    
    // Function for numbers >=1000 and <=9999
    std::string belowTenthousand(int);
    
    // Member function print() prints the english conversion of the number
    // E.g. 9999 -> nine thousand nine hundred ninety-nine
    void print();
};


#endif /* Numbers_hpp */
