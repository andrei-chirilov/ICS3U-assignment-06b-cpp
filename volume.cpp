// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calculates the area of a triangle using functions


#include <iostream>
#include <string>

void volume(float length) {
    // This function calculates volume of a cube

    // declaring volume
    // process
    float volume = length * length * length;

    // output
    std::cout << "The volume is " << volume << " cm^3" << std::endl;
}

main() {
    // This function asks for the length

    // variables
    std::string stringLength;
    float length = 0;


    while (true) {
        try {
            // input
            std::cout << "What is the length: " << std::endl;
            std::cin >> stringLength;
            // turns variables into float
            length = std::stof(stringLength);

            // runs volume()
            volume(length);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input. Try again." << std::endl;
            continue;
        }
    }
}
