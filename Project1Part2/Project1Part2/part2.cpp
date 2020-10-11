//
//  part2.cpp
//  Project 1, Part 2
//  COSC 1337 W001 6W2
//  Created by Logan Kells on 7/20/20.
//  Copyright © 2020 logan. All rights reserved.
//

/*
 Objectives of this project:  Reading from a file and using functions in a character analysis program.

 Failure to read from a file and use of function will result in a grade of zero. Submit your .cpp file as well as the .txt file with the screen shot of the output (not just the compiled program).

 Write a function  that reads the contents of a file named  text.txt (you will have to create this file on notepad or any other text editor and write a sentence of your choice. Your sentence should include upper case, lower case, and numbers. Keep in mind you need to submit this file as well) and determine the following:

 The number of uppercase letters in the file
 The number of lowercase letters in the file
 The number of digits in the file
 Upon finishing the task, program will ask the user if they would like to read another file and the program will re-start (you need to utilize a loop to do so) should the user prompt the program with 'Y'.

 Prompts And Output  Labels. There are no prompts-- nothing is read from standard keyboard, just from the file text.txt. Each of the numbers calculated is displayed on a separate line on standard output , preceded by the following prompts (respectively): "Uppercase characters : ", "Lowercase characters : ", "Digits: ".

 Input Validation. None.

 *Don’t forget to comment your program. Please check your file before submission.  Wrong file, corrupted file, zip file will result in a grade of zero.

 Following rubrics will be used to grade your program.
 
 */

#include <iostream>
#include <fstream> // for streaming input/output
#include <string> // for using string objects
#include <vector> // using vectors

// function prototypes
std::string readText(std::string);
std::vector<int> countElements(std::string*);

int main(int argc, const char * argv[]) {
    
    // Use a flag controlled while-loop
    char flag = 'Y';
    while (flag == 'Y'){
        // Open the file text.txt and read the first line. Only expecting 1 line.
        std::string filename = "text.txt";
        std::string textline = readText(filename);
        
        // Find the counts of upper-case, lower-case, and digits.
        // Use a pointer to the string to send to the function countElements.
        std::string* ptr_text = &textline;
        std::vector<int> counts = countElements(ptr_text);
        
        // Print all the results
        // The vector has the elements stored in this order [digits, upper count, lower count]
        std::cout << "Uppercase characters : " << counts[1] << std::endl;
        std::cout << "Lowercase characters : " << counts[2] << std::endl;
        std::cout << "Digits: " << counts[0] << std::endl;
        
        // Prompt if they want to re-run the program. Update flag using cin.
        std::cout << "Do you want to run again? Enter Y to run again: ";
        std::cin >> flag;
    }
    return 0;
}

std::string readText(std::string filename){
    // open the file using iostream (see chapter 5)
    std::ifstream inputFile;
    inputFile.open(filename);
    
    // read the line from the file. Define a new string object for the line.
    std::cout << "Reading line from the file..." << std::endl;
    std::string line;
    // use getline() to read the whole line. This only works for one line.
    std::getline(inputFile, line);
    
    // close the file
    inputFile.close();
    
    // Return the line (string) object back.
    return line;
}

std::vector<int> countElements(std::string* ptr){
    // Create a vector to store the values [digits, upper count, lower count]
    std::vector<int> counts = {0,0,0};
    
    // Initialize count interators
    int Ucount = 0; // count of upper-case
    int Lcount = 0; // count of lower-case
    int Dcount = 0; // count of digits
    
    // Use the size member function of the string object.
    double lngth = ptr->size();
    
    // Use a loop over the length of the string to find the count of upper-case and lower-case letters.
    // Use the std::isupper(c) and std::islower(c) algorithms to search for upper/lower chars.
    // These will return a non-zero value if the string is uppercase letter or lower case.
    // See here https://en.cppreference.com/w/cpp/string/byte/isupper
    for(int i=0; i<lngth; i++){
        // Check if the current index value is upper-case.
        if(std::isupper(ptr->at(i))){
            Ucount += 1; // increase upper-case count
        }
        // Otherwise check if the current index value is lower-case.
        else if(std::islower(ptr->at(i))){
            Lcount += 1; // increase lower-case count
        }
        // Otherwise check if the current index value is a digit (number).
        else if(std::isdigit(ptr->at(i))){
            Dcount += 1; // increase the digit count
        }
        
        // Any other chars can be ignored.
        else{
            continue;
        }
    }
    
    // Store the values [digits, upper count, lower count]
    counts[0] = Dcount;
    counts[1] = Ucount;
    counts[2] = Lcount;
    
    // Send the vector
    return counts;
}
