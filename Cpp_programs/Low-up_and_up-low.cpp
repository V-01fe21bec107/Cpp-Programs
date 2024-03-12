#include <iostream>
#include <cctype> // for tolower and toupper functions
#include <string>

void convertToUppercase(std::string &str) {
    for (char &c : str) {
        c = std::toupper(c);
    }
}

void convertToLowercase(std::string &str) {
    for (char &c : str) {
        c = std::tolower(c);
    }
}

int main() {
    std::string input;

    // Get input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Convert to uppercase
    convertToUppercase(input);
    std::cout << "Uppercase: " << input << std::endl;

    // Convert to lowercase
    convertToLowercase(input);
    std::cout << "Lowercase: " << input << std::endl;

    return 0;
}
