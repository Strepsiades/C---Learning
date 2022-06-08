//Write a program that uses a do while loop to repetitively
//request two strings from the user and report which string is less than
//the other.

#include <iostream>
#include <string>

using std::cin;

int main(){
    do {
        std::cout << "enter the first line" << std::endl;
        std::string s1;
        getline(cin, s1);
        std::cout << "enter the second line" << std::endl;
        std::string s2;
        getline(cin, s2);
        if (s1 >= s2) {
            std::cout << ">=\n";
        }
        else {
            std::cout << "<\n";
        }
    }
    while (true);


}