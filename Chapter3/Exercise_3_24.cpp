//Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.

//Exercise 3.20: Read a set of integers into a vector. Print the sum of each
//pair of adjacent elements. Change your program so that it prints the sum of
//the first and last elements, followed by the sum of the second and second-to-
//last, and so on.

#include <iostream>
#include <vector>

using std::vector;

int main () {
    vector<int> v;
    int curr;
    while (std::cin >> curr) {
        v.push_back(curr);
    }
    
    //Print the sum of each pair of adjacent elements
    for (auto it = v.cbegin(); it + 1 < v.cend(); ++it) {
        std::cout << *it + *(it + 1) << " ";
    }
    std::cout << std::endl;

    //Change your program so that it prints the sum of
    //the first and last elements, followed by the sum of the second and second-to-
    //last, and so on.
    for (auto it = v.cbegin(); it < v.cend() - 1 - (it - v.begin()); ++it) {
        std::cout << *it + *(v.cend() - 1 - (it - v.begin())) << " ";
    }
    std::cout << std::endl;
}