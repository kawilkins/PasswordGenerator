PasswordGenerator
===============

# Description

This is a simple C++ program that generates a random password based on a user-specified length.
The program ensures the password is minimally 8 characters and 30 characters maximum.
The generated string includes a mix of uppercase letters, lowercase letters, numbers, and special characters.

The project was created as a tool needed for creating temporary passwords for users.
While other tools _do_ exist it was desired to create the tool for personal use, and to share publicly with the world.

# Features

- Generates random passwords using a combination of:
    - [x] Uppercase letters (A-Z)
    - [x] Lowercase letters (a-z)
    - [x] Numbers (0-9)
    - [x] Special characters (!@#$%^&\*)
- Validates that the password length is at least 8 characters
- Evaluates invalid input using exception handling
- Prompts the user to retry if the input is invalid ( < 8 characters or > 30 characters)

# Usage
1. Run the program.
2. Enter the desired password length when prompted.
3. If the length is less than 8, an error message will be displayed, and you will be prompted to try again.
4. If the length is valid (between 8 and 30 characters), a random string will be generated and output to the screen.

# License
This project is licensed under the MIT License.
