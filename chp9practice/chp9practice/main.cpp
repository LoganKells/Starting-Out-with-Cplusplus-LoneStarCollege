//
//  main.cpp
//  chp9practice
//
//  Created by Logan Kells on 7/19/20.
//  Copyright © 2020 logan. All rights reserved.
//

#include <iostream>
using namespace std;

void getOrder(int& donuts){
    std::cout << "How many nuts? ";
    std::cin >> donuts;
}

int main(int argc, const char * argv[]) {
    struct Rectangle{
        int length;
        int width;
    };
    
    Rectangle* r = new Rectangle;
    r->length = 10;
    r->width = 14;
    std::cout << "Area: " << (r->length * r->width) << std::endl;
}
