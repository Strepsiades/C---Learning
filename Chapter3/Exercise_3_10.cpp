//Exercise 3.10: Write a program that reads a string of characters including
//punctuation and writes what was read but with the punctuation removed.

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

    string s;
    cin >> s;
    for (auto &c : s) {
        if (ispunct(c)) {
            c = ' ';
        }
    }
    cout << s << endl;

}