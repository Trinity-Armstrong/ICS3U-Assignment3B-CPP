// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This is the greatest number program

#include <iostream>

int main() {
    // This function runs the greatest number program

    // variables
    int FirstNumber;
    int SecondNumber;
    int ThirdNumber;

    // Input
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> FirstNumber;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> SecondNumber;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> ThirdNumber;

    // process
    if (FirstNumber > SecondNumber && FirstNumber > ThirdNumber) {
        std::cout << "" << std::endl;
        std::cout << "The greatest number is " << FirstNumber << std::endl;
    } else if (SecondNumber > FirstNumber && SecondNumber > ThirdNumber) {
          std::cout << "" << std::endl;
          std::cout << "The greatest number is " << SecondNumber << std::endl;
    } else if (ThirdNumber > FirstNumber && ThirdNumber > SecondNumber) {
          std::cout << "" << std::endl;
          std::cout << "The greatest number is " << ThirdNumber << std::endl;
          std::cout << "" << std::endl;
    }
}
