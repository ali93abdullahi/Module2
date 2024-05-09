//============================================================================
// Name        : Mod2project.cpp
// Author      : Ali Abdullahi
// Version     :
// Copyright   : Your copyright notice
// Description : Module 2 Critical Thinking
//============================================================================

#include <iostream>
#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenatedString;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        concatenatedString = firstString + secondString;

        std::cout << "Resulting String: " << concatenatedString << std::endl;
    }

    return 0;
}
