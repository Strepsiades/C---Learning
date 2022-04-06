//Exercise 3.45: Rewrite the programs again, this time using auto.

#include <iostream>
#include <iterator>

int main () {
    int ia[3][4] = { // three elements; each element is an array of size 4
    {0, 1, 2, 3}, // initializers for the row indexed by 0
    {4, 5, 6, 7}, // initializers for the row indexed by 1
    {8, 9, 10, 11} // initializers for the row indexed by 2
    };

    //One version should use a range for to manage the iteration
    for (auto (&p) : ia) {
        std::cout << "{";
        for (auto q : p) {
            std::cout << q << " ";
        }
        std:: cout << "}\n";
    }
}