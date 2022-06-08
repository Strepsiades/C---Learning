//Exercise 3.14: Write a program to read a sequence of ints from cin and
//store those values in a vector.

#include <iostream>
#include <vector>

using std::vector;

int main () {
    vector<int> v;
    int curr;
    while (std::cin >> curr) {
        v.push_back(curr);
    } 
    for (int i = 0; i < v.size(); i++) {
        std::cout <<  v[i] << "\n";
    }
}