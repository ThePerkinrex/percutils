//
//  percutils.cpp
//  percutils
//
//  Created by Juan on 23/7/18.
//  Copyright © 2018 ThePerkinrex. All rights reserved.
//

#include "percutils.hpp"
#include <iostream>

void print(char * str){
    std::cout << str;
}

void println(char * str){
    print(str);
    std::cout << "\n";
}
