//Exercise 5.14: Write a program to read strings from standard input
//looking for duplicated words. The program should find places in the input
//where one word is followed immediately by itself. Keep track of the largest
//number of times a single repetition occurs and which word is repeated. Print
//the maximum number of duplicates, or else print a message saying that no
//word was repeated. For example, if the input is
//how now now now brown cow cow
//the output should indicate that the word now occurred three times.

#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::string;

int main(){
    vector<string> v;
    string word, lastword, maxword;
    int currCnt = 1, maxCnt = 1;
    std::cin >> lastword;
    while (std::cin >> word){
        if (word == lastword) {
            ++currCnt; 
            if (currCnt > maxCnt){
                maxCnt = currCnt;
                maxword = word;
            }
        }
        else {
            currCnt = 1;
        }
        lastword = word;
    }
    std::cout << maxword << " " << maxCnt;
}