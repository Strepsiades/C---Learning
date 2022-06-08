//Exercise 9.18: Write a program to read a sequence of strings from the
//standard input into a deque. Use iterators to write a loop to print the
//elements in the deque.

#include<string>
#include<deque>
#include<iostream>

using namespace std;

int main() {
    deque<string> d;
    string word;
    while(cin >> word) {
        d.push_back(word);
    }
    for (auto it = d.begin(); it != d.end(); it++) {
        cout << *it;
    }

}
