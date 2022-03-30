//Exercise 3.6: Use a range for to change all the characters in a string to X.

#include <iostream>
#include <string>

using std::string;

int main() {
    string s;
    std::cin >> s;
    //    for (auto &c : s)  c = "X";
    for (decltype(s.size()) index = 0; index < s.size(); ++index) {
        s[index] = 'X';
    }
    std::cout << s << std::endl;
}