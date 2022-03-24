#include <string>
#include <iostream>

using std::string;
using std::cin;

//Exercise 3.2: Write a program to read the standard input a line at a time.
//Modify your program to read a word at a time.
/*
int main () {
   string line;
   while (getline(cin, line)) {
       std::cout << line << std::endl;
   }
   return 0;
}
*/

int main (){
    string word;
    while(cin >> word){
        std::cout << word << std::endl;
    }
    return 0;
}