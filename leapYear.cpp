// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-06
// This program tells a user if the year they
// they enter is a leap year using nested if statements

#include <iostream>
#include <string>

int main() {
    // this function determines if a given year is a leap year
    std::string yearInputString;
    int yearInput;

    // input
    std::cout << "Please enter a year : ";
    std::cin >> yearInputString;

    // process
    try {
        yearInput = std::stoi(yearInputString);
        if (yearInput % 4 == 0) {
            if (yearInput % 100 == 0) {
                if (yearInput % 400 == 0) {
                    std::cout << yearInput << " is a leap year."
                    << std::endl;
                } else {
                    // output
                    std::cout << yearInput << " is not a leap year."
                    << std::endl;
                }
            } else {
                std::cout << yearInput << " is a leap year."
                << std::endl;
            }
        } else {
            std::cout << yearInput << " is not a leap year."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid year. Please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
