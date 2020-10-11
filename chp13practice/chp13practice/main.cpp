//
//  main.cpp
//  chp13practice
//
//  Created by Logan Kells on 8/9/20.
//  Copyright © 2020 logan. All rights reserved.
//

#include <iostream>
using namespace std;

class TestClass{
public:
    TestClass(int x){
        cout << x << endl;
    }
    TestClass(){
        cout << "Hello!" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    TestClass test(77);
    TestClass* ptrtest;
    cout << ptrtest << endl;
    return 0;
}
