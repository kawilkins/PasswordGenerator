PasswordGenerator
===============

# Description

This is a simple C++ program that generates a random password based on a user-specified length.
The program ensures the password is at least 8 characters long and includes a mix of uppercase letters, lowercase letters, numbers, and special characters.

The project was created as a tool needed for creating temporary passwords for users.
While other tools exist it was desired to create the tool for personal use, and to share publicly with the world.

# Features

- Generates random passwords using a combination of:
    - [x] Uppercase letters (A-Z)
    - [x] Lowercase letters (a-z)
    - [x] Numbers (0-9)
    - [x] Special characters (!@#$%^&\*)
- Validates that the password length is at least 8 characters
- Evaluates invalid input using exception handling
- Prompts the user to retry if the input is invalid ( < 8 characters)

# Usage
1. Run the program.
2. Enter the desired password length when prompted.
3. If the length is less than 8, an error message will be displayed, and you will be prompted to try again.
4. If the length is valid (8 or more), a random password will be generated and displayed.

# License
This project is licensed under the MIT License.
