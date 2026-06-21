/*
 * Challenge 
 * Prompt for a user name, then welcom them by name
 */
#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::cout << "Enter your first name: " << std::flush;
    std::cin >> firstName;
    std::cout << firstName << ", welcome to C++!" << std::endl;
    std::cout << std::endl;

    return 0;
}