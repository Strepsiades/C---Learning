//Exercise 5.20: Write a program to read a sequence of strings from the
//standard input until either the same word occurs twice in succession or all
//the words have been read. Use a while loop to read the text one word at a
//time. Use the break statement to terminate the loop if a word occurs twice
//in succession. Print the word if it occurs twice in succession, or else print a
//message saying that no word was repeated.

#include <iostream>
#include <string>

using std::string;
using std::cin;

int main(){
    string lastword;
    string currword;

    if (cin >> lastword) {
        while (cin >> currword){
            if (lastword == currword) {     
                break;
            }
            lastword = currword;
        }
    }
    std::cout << currword <<std::endl;
}