//
//  main.cpp
//  chp10practice
//
//  Created by Logan Kells on 7/19/20.
//  Copyright © 2020 logan. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>
int main(int argc, const char * argv[]) {
    
    char var1 = '1';
    
    if (!isdigit(var1)){
        std::cout << "Not digit 0-9 " << std::endl;
    }
    else{
        std::cout << "Digit between 0-9" << std::endl;
    }
    
    std::cout << tolower('Z') << std::endl;
    
    return 0;
}
