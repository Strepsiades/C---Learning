//Exercise 3.4: Write a program to read two strings and report whether the
//strings are equal. If not, report which of the two is larger. Now, change
//the program to report whether the strings have the same length, and if
//not, report which is longer.

//I want to skip the first question comparing which one is larger.

#include <iostream>
#include <string>

using std::string;

int main() {
    string s1, s2;
    std::cin >> s1 >> s2;
    if (s1.size() == s2.size()) {
        std::cout << "Equal" << std::endl;
    } 
    else if (s1.size() > s2.size()) {
            std::cout << "Larger" << std::endl;
    }
    else {
            std::cout << "Lesser" << std::endl;
    }
}