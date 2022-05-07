//Exercise 9.19: Rewrite the program from the previous exercise to use a
//list. List the changes you needed to make.

#include<string>
#include<list>
#include<iostream>

using namespace std;

int main() {
    list<string> d;
    string word;
    while(cin >> word) {
        d.push_back(word);
    }
    for (auto it = d.begin(); it != d.end(); it++) {
        cout << *it;
    }

}