/*
 * @file passwd_generator.cpp
 * @author Kevin Wilkins <kwilkinsrd@gmail.com>
 * @date 12/04/2024
 * @version 0.1.0
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

std::string generatePassword(int length) {
    std::string allowChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "abcdefghijklmnopqrstuvwxyz"
                             "0123456789"
                             "!@#$%^&*";
    std::string password;
    for (int i = 0; i < length; ++i) {
        password += allowChars[rand() % allowChars.length()];
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
