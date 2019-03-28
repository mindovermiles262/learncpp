//
//  main.cpp
//  LearnCPP
//
//  Created by Andrew Duss on 3/21/19.
//  Copyright © 2019 Andrew Duss. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int x{ 5 };
    std::cout << x << "\n";
    std::cout << x << std::endl;
    
    std::cout << "Enter a number: ";
    int user_input{};
    std::cin >> user_input;
    std::cout << "You've typed the number " << user_input << ". Well Done!\n";
    return 0;
}
