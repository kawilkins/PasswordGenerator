/*
 * @file passwd_generator.cpp
 * @author Kevin Wilkins <kwilkinsrd@gmail.com>
 * @date 12/04/2024
 * @version 0.1.1
 * @brief Random password generator
 *
 * This program will generate a random password consisting of
 * upper case, lowercase, numbers, and special characters.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <vector>

std::string generatePassword(int length) {

    // Declare a vector array to store all allowed characters
    std::vector<char> allowChars;
    // Define the array of characters according to their ASCII value.
    // Then back fill them into the allowChars vector.
    std::pair<int,int> charRange[] = {
        {65, 90},   // Uppercase letters
        {97, 122},  // Lowercase letters
        {48, 57}    // Numbers 0-9
    };
    for (auto& range : charRange) {
        for (int c = range.first; c <= range.second; ++c)
            allowChars.push_back(static_cast<char>(c));
    }

    // Define an array of special characters to be used.
    // Then back fill them into the allowChars vector.
    int specialChars[] = {33, 64, 35, 36, 37, 94, 38, 42};
    for (int special : specialChars)
        allowChars.push_back(static_cast<char>(special));

    // Convert ASCII values to string.
    std::string allChars(allowChars.begin(), allowChars.end());

    // Assemble password as a random generated string of all characters from
    // the list of allowed characters.
    std::string password;
    for (int i = 0; i < length; ++i) {
        password += allChars[rand() % allChars.length()];
    }
    return password;
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    int length;

    do {
        std::cout << "Password length: ";
        std::cin >> length;

        try {
            if (length < 8) {
                throw std::invalid_argument("Password must be a minimum of 8 characters.");
            } else {
                std::string password = generatePassword(length);
                std::cout << "Password:  " << password << std::endl;
            }
            break;
        } catch (const std::invalid_argument &err) {
            std::cerr << "Error: " << err.what() << " Please try again.\n";
        }
    } while (true);

    return 0;
}
