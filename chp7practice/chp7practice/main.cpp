//
//  main.cpp
//  chp7practice
//
//  Created by Logan Kells on 7/12/20.
//  Copyright © 2020 logan. All rights reserved.
//

#include <iostream>
#include <vector>

void addValues(std::vector<int>& vector_og){
    
    std::cout << "original vector: ";
    for (int i : vector_og)
        std::cout << i << ",";
    std::cout << std::endl;
    
    std::cout << "Changing vector elements..." << std::endl;
    for (int i = 0; i < 5; i++){
        vector_og[i] = 2;
    }
    
}


int main(int argc, const char * argv[]) {
   
    // Create array 2d of characters
    int n1[4] = {99,87};
    std::cout << "Element of array n1: " << n1[2] << std::endl;
    //------
    
    std::vector<int> n = {10,20};
    

}


