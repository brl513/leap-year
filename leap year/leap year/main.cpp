//
//  main.cpp
//  leap year
//
//  Created by brl513 on 16/11/2020.
//  Copyright © 2020 brl513. All rights reserved.
//

#include <iostream>

// Test Comment

int main() {
    bool yearIs4Digits = false;
    bool yearIsLeapYear = false;
    while (yearIs4Digits == false || yearIsLeapYear == false){
        int year;
        std::cout << "Enter year: ";
        std::cin >> year;
        int count = 0;
        int n = year;
        while (n != 0){
            n = n/10;
            count = count + 1;
        }
        if (count == 4){
            // std::cout << "Year is four-digits" << std::endl;
            yearIs4Digits = true;
            int a = year % 4;
            int b = year % 100;
            int c = year % 400;
            if (a == 0) {
                // std::cout << "Year could be a leap year." << std::endl;
                if ((b == 0 && c == 0) || b != 0 ) {
                    std::cout << "Year is a leap year." << std::endl;
                    yearIsLeapYear = true;
                }
                else {
                    std::cout << "Year is not a leap year." << std::endl;
                }
            }
            else {
                std::cout << "Year is not a leap year." << std::endl;
            }
        }
        else {
            std::cout << "You need to re-enter a four-digit year." << std::endl;
        }
        
    }
  
}
