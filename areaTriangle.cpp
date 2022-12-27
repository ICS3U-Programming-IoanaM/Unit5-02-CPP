// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Dec. 4, 2022
// a program that calculates the area of a triangle

#include <iomanip>
#include <iostream>


void calcArea(float base, float height) {
    // variables
    float area;

    // calculating the area of the triangle
    area = (base * height) / 2;

    // displaying the results
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << "The area is "
              << area << "cm^2." << std::endl;
}

// main function
int main() {
    // variables
    std::string baseStr, heightStr;
    float baseFl, heightFl;

    // getting user input for base
    std::cout << "Enter the base (cm): ";
    std::cin >> baseStr;

    // getting user input for the height
    std::cout << "Enter the height (cm): ";
    std::cin >> heightStr;

    // exception handling
    try {
        // converting string to float
        baseFl = stof(baseStr);
        heightFl = stof(heightStr);

        // checks for negative and 0
        if (baseFl <= 0 || heightFl <= 0) {
            std::cout << "Invalid input! Please make sure your"
                      << " input is a positive number." << std::endl;

        // user input is positive
        } else {
            // calls function to calculate the area of a triangle
            calcArea(baseFl, heightFl);
        }

    // invalid input was entered
    } catch (std::invalid_argument) {
        std::cout << "Invalid input! Please make sure your"
                  << " input is a positive number." << std::endl;
    }
}
