// copyright (c) 2026 all rights reserved
// Created : Adrian student
// Date : 26 OCT 2026
// This programs tells the grandparents if someone is
// eligible to date their grandchild
#include <iostream>
#include <string>


int main() {
    // define constants
    const int MIN = 25;
    const int MAX = 40;

    // define variables
    int candidateAgeInt;

    // get candidate age
    std::string candidateAgeStr;
    std::cout << "Enter your age : ";
    std::cin >> candidateAgeStr;
    std::cout << "\n";

    // check eligibility
    try {
        // check if the user entry is integer
        int candidateAgeInt = std::stoi(candidateAgeStr);

        // check the candidate age range
        if (candidateAgeInt > MIN && candidateAgeInt < MAX) {
            std::cout << "you can date my grandchild";
            std::cout << "\n";
        } else if (candidateAgeInt <= MIN) {
            std::cout << " you are to young to date my grandchild" << std::endl;
        } else if (candidateAgeInt >= MAX) {
            std::cout << "you are too old to date my grandchild" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << candidateAgeStr << "is not an integer" << std::endl;
    }
    std::cout << "Thanks for your interest";
    std::cout << "\n";
}
