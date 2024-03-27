#include <iostream>
#include <string>
#include <algorithm>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    // Create a copy of the string
    std::string strCopy = str;
    
    // Remove spaces from the string
    strCopy.erase(std::remove(strCopy.begin(), strCopy.end(), ' '), strCopy.end());
    
    // Get the length of the string
    int length = strCopy.length();
    
    // Compare characters from beginning and end
    for (int i = 0; i < length / 2; ++i) {
        if (tolower(strCopy[i]) != tolower(strCopy[length - i - 1])) {
            return false; // Not a palindrome
        }
    }
    
    return true; // Palindrome
}

int main() {
    std::string input;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }
    
    return 0;
}
