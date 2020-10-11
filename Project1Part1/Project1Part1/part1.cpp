//
//  part1.cpp
//  Project 1, Part 1
//  COSC 1337 W001 6W2
//  Created by Logan Kells on 7/12/20.
//  Copyright © 2020 logan. All rights reserved.
//
/*
 Objective of this project: Utilizing loops in reading an array, utilizing searching and sorting arrays.

 Failure to utilize the objectives will result in a grade of zero for this part. Submit your .cpp file as well as the  screen shot of the output (not just the compiled program).

 Write a program that reads an array of 10 integer from standard keyboard (user) utilizing a loop and outputs the following

 The elements of array
 Minimum value
 Maximum value
 product of all the numbers.
 Input validation: Your program should only accept integers.
 */

#include <iostream>
#include <limits>

// Function Prototypes
void printArray(int[], const int); // pass array using a pointer and the size of the array. This function will be used to print the array elements.
void loadArray(int[], const int); // this function will prompt the user for values and populate the array (which is created in main()).
void printMin(int[], const int); // This function will find the minimum number within the array passed and print.
void printMax(int[], const int); // This function will find the maximum number within the array passed and print.
void printProd(int[], const int); // This function will find the product of every element multiplied together.


int main(int argc, const char * argv[]) {
    // Main function calls various functions according to the project prompt:
    
    // Create the array using user's input
    const int SIZE = 10; // array size stored as constant size.
    int fxnArray[SIZE];
    
    // Load the array with user input
    loadArray(fxnArray, SIZE);
    
    // print the array
    printArray(fxnArray, SIZE);
    
    // print the minimum value
    printMin(fxnArray, SIZE);
    
    // print the maximum value
    printMax(fxnArray, SIZE);
    
    // print the product of every value
    printProd(fxnArray, SIZE);
    
    return 0;
}

void loadArray(int arr[], const int SIZE){
    // Load the array elements with values from user
    // Prompt the user to enter the number of digits of SIZE.
    
    std::cout << "Please enter " << SIZE << " integers: " << std::endl;
    for (int i=0; i<SIZE; i++){
        // Using the test variable to determine if the entered value is int-type.
        int test = 0;
        std::cin >> test;
        // Use a while-loop with the condition being if the type of the value entered by the user doesn't match the declared int-type of "test" as declared above.
        while(!(std::cin)){
            // re-prompt for integer.
            std::cout << "Enter Int: ";
            // Clearing the error flag on std::cin
            // See lecture notes: https://youtu.be/pvlAnG3EhWM?t=177
            std::cin.clear();
            // Clearing the streamsize set of characters in the buffer.
            // See lecture notes: https://youtu.be/pvlAnG3EhWM?t=177
            std::cin.ignore(20, '\n');
            // try another value if the condition failed.
            std::cin >> test;
        }
        // Load the value (that passed the condition) to the array.
        arr[i] = test;
    }
}

void printArray(int arr[], const int SIZE){
    // Print the array elements using a standard for-loop.
    std::cout << "Array Elements: ";
    for (int i=0; i<SIZE; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printMin(int arr[], const int SIZE){
    // Find the minimum value using a for-loop.
    // The minimum value is initialized as the first element of the array.
    int minValue = arr[0];
    for (int i=1; i<SIZE; i++){
        // Nested if-statement will replace the minimum value if a lower value is found in the array.
        if (arr[i] < minValue){
            minValue = arr[i];
        }
    }
    // Print.
    std::cout << "Minimum Value: " << minValue << std::endl;
}

void printMax(int arr[], const int SIZE){
    // Find the maximum value using a for-loop.
    // The maximum value is initialized as the first element of the array.
    int maxValue = arr[0];
    for (int i=1; i<SIZE; i++){
        // Nested if-statement will replace the maximum value if a larger value is found in the array.
        if (arr[i] > maxValue){
            maxValue = arr[i];
        }
    }
    // Print.
    std::cout << "Maximum Value: " << maxValue << std::endl;
}

void printProd(int arr[], const int SIZE){
    // Using a standard for-loop to traverse the array elements.
    // Initialize the product at 1 so the multiplication of the first element is the first element's value.
    // Using "long long int-type" because 10x integers multiplied can be very large...
    // ...this won't be big enough for VERY large numbers >2^63...
    // ...see https://en.cppreference.com/w/cpp/language/types
    long long int product = 1;
    for (int i=0; i < SIZE; i++){
        // Multiply the product by the array element value.
        product *= arr[i];
    }
    // Print.
    std::cout << "Product of elements: " << product << std::endl;
}
