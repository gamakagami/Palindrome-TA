#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string strCopy = str;
    
    strCopy.erase(std::remove(strCopy.begin(), strCopy.end(), ' '), strCopy.end());
    
    int length = strCopy.length();
    
    for (int i = 0; i < length / 2; ++i) {
        if (tolower(strCopy[i]) != tolower(strCopy[length - i - 1])) {
            return false;
        }
    }
    
    return true;
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
