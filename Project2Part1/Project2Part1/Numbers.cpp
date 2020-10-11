//
//  Numbers.cpp
//  Project2Part1
//
//  Created by Logan Kells on 8/3/20.
//  Copyright © 2020 logan. All rights reserved.
//
//  COSC-1337 W001 6W2

#include "Numbers.hpp"
#include <iostream>

// Class constructor
Numbers::Numbers(int j){
    number = j;
}

// Print function for 29
void Numbers::print(){
    if(number>=0 && number <20){
        engNumber = belowTwenty(number);
    }
    else if(number>=20 && number<=99){
        engNumber = belowHundred(number);
    }

    else if(number>=100 && number<=999){
        engNumber = belowThousand(number);
    }
    
    else if(number>=1000 && number<=9999){
        engNumber = belowTenthousand(number);
    }
    else{
        engNumber = "Error. Number must between 0-9999.";
    }
    
    // Print the results
    std::cout << "Converts to: " << engNumber << std::endl;
}

// function that returns number <20
std::string Numbers::belowTwenty(int num){
    return lessThan20[num];
}

// function for numbers >=20 and <=99
std::string Numbers::belowHundred(int num){
    std::string engNum;
    // Set up a while loop to evaluate the proper english conversion of the number
    // that is in the tens-digit place. For example 90 has 9 in the ten-digits place
    // which converts to ninety.
    int sub = 90;
    int rm = number - sub;
    // i starts at 7 given the tens[] array has 8 elements. So this starts at ninety.
    int i = 7;
    // Each while loop will recalculate a remainder and update the position of tens[i]
    // so that we get the correct remainer to send to belowTwenty(int)
    // and so the english conversion of the tens-digit is correct.
    while(rm < 0){
        sub -= 10;
        rm = number - sub;
        i -= 1;
    }
    // Build the english conversion
    // 9Tens-digit converion (except for 10-19).
    engNum = tens[i];
    engNum += " ";
    // Conversion for digits <20.
    // If the remaining number after conversion is zero, then we're done!
    if(rm == 0){
        return engNum;
    }
    // Otherwise convert the digit <20 to english
    else{
        engNum += belowTwenty(rm);
    }
    return engNum;
}

// function for number >=100 and <=999
std::string Numbers::belowThousand(int num){
    std::string engNum;
    // Find the count of hundreds & convert the hundreds count to english.
    // We can re-use the belowTwenty(int) function.
    int hundreds = number / 100;
    engNum = belowTwenty(hundreds);
    engNum += " hundred";
    
    // Find the english conversion of the remainder (below hundreds level).
    number -= hundreds*100; // convert number variable
    
    // We will reuse functions here by updating the value of the numbers variable
    // so that it can be passed to the proper english conversion function.
    
    // If the remaining number after conversion is zero, then we're done!
    if(number==0){
        return engNum;
    }
    // Pass numbers converted <20 to the belowTwenty(int) function
    else if(number<20){
        engNum += " ";
        engNum += belowTwenty(number);
    }
    // Pass numbers converted 20-99 to the belowHundred(int) function
    else if(number>=20 && number<=99){
        engNum += " ";
        engNum += belowHundred(number);
    }
    // Catch any errors in the math.
    else{
        engNum = "ERROR";
    }
    // Return the english translation result
    return engNum;
}

// Function for numbers >=1000 and <=9999
std::string Numbers::belowTenthousand(int num){
    std::string engNum;
    // Find the count of thousands & conver the thousands count to english
    int thousands = number / 1000;
    engNum = belowTwenty(thousands);
    engNum += " thousand";
    
    // Find the english conversion of the remainder (below 1000 level now).
    number -= thousands * 1000;
    
    // We will reuse functions here by updating the value of the numbers variable
    // so that it can be passed to the proper english conversion function.

    // If the remaining number after conversion is zero, then we're done!
    if(number==0){
        return engNum;
    }
    // Pass numbers converted <20 to the belowTwenty(int) function
    else if(number>0 && number<20){
        engNum += " ";
        engNum += belowTwenty(number);
    }
    // Pass numbers converted 20-99 to the belowHundred(int) function
    else if(number>=20 && number<=99){
        engNum += " ";
        engNum += belowHundred(number);
    }
    // Pass numbers converted 100-999 to the belowThousand(int) function
    else if(number>=100 && number<=999){
        engNum += " ";
        engNum += belowThousand(number);
    }
    // Catch any math errors.
    else{
        engNum = "ERROR";
    }
    // Return the english translation result
    return engNum;
}

/* Below is my older code-block for belowHundred(i). I've replaced with much fewer lines above.
 // function for numbers >=20 and <=99
std::string Numbers::belowHundred(int num){
    std::string engNum;
    
     // We can identify if the current number being evaluated is between specified ranges.
     // Therefore we can calculate a remainder that is below 20, and reuse the belowTwenty(int) function.
     // Every if statement is the same; except the range is changed by 10 digits.
     if(number>=20 && number<=29){
        int rm = number - 20;
        engNum = "twenty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=30 && number<=39){
        int rm = number - 30;
        engNum = "thirty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=40 && number<=49){
        int rm = number - 40;
        engNum = "forty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=50 && number<=59){
        int rm = number - 50;
        engNum = "fifty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=60 && number<=69){
        int rm = number - 60;
        engNum = "sixty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=70 && number<=79){
        int rm = number - 70;
        engNum = "seventy ";
        engNum += belowTwenty(rm);
    }
    else if(number>=80 && number<=89){
        int rm = number - 80;
        engNum = "eighty ";
        engNum += belowTwenty(rm);
    }
    else if(number>=90 && number<=99){
        int rm = number - 90;
        engNum = "ninety ";
        engNum += belowTwenty(rm);
    }
    else{
        engNum = "ERROR";
    }
}*/




