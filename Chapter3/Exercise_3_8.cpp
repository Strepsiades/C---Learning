#include <iostream>
#include <string>

using std::string;

int main() {
    string s;
    std::cin >> s;
    //    for (auto &c : s)  c = "X";
    decltype(s.size()) index = 0;
    while (index < s.size()) {
        s[index] = 'X';
        index++;
    }
    std::cout << s << std::endl;
}