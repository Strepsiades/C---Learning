/*Exercise 3.17: Read a sequence of words from cin and store the values a
vector. After you’ve read all the words, process the vector and change
each word to uppercase. Print the transformed elements, eight words to a
line.*/
#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using std::vector;
using std::string;

int main() {
    vector<string> v;
    string curr;
    while (std::cin >> curr) {
        v.push_back(curr);
    }
    for (string &w : v) {
        for (auto &c : w) {
            if (isalpha(c)) {
                c = toupper(c);
            } 
        }
    }
    for (decltype(v.size()) i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
        if (i % 8 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}