//Exercise 3.44: Rewrite the programs from the previous exercises using a
//type alias for the type of the loop control variables.

#include <iostream>
#include <iterator>

using int_array = int[4];

int main () {
    int ia[3][4] = { // three elements; each element is an array of size 4
    {0, 1, 2, 3}, // initializers for the row indexed by 0
    {4, 5, 6, 7}, // initializers for the row indexed by 1
    {8, 9, 10, 11} // initializers for the row indexed by 2
    };

    //One version should use a range for to manage the iteration
    for (int_array (&p) : ia) {
        std::cout << "{";
        for (int q : p) {
            std::cout << q << " ";
        }
        std:: cout << "}\n";
    }
}