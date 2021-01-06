// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program calculates the area of a triangle

#include <iostream>
#include <cmath>
#include <string>

void calculate_area(int base, int height) {
    // calculates the area of a triangle

    float area;
    std::cout.precision(4);

    // process
    area = base * height / 2.0;

    // output
    std::cout << "The area is: " << area << " cm²" << std::endl;
}


main() {
    std::string baseFromUser;
    std::string heightFromUser;
    int base;
    int height;
    std::cout.precision(4);

    // input
    std::cout << "Enter the base of the triangle(cm): ";
    std::cin >> baseFromUser;
    std::cout << "Enter the height of the triangle(cm): ";
    std::cin >> heightFromUser;
    std::cout << std::endl;

    try {
        base = std::stoi(baseFromUser);
        height = std::stoi(heightFromUser);

    // calls function
    calculate_area(base, height);
    } catch (std::invalid_argument) {
    std::cout << "" << std::endl;
    std::cout << "This was not a number." << std::endl;
    }
}
