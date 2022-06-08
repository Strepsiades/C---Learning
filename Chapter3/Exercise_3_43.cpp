//Exercise 3.43: Write three different versions of a program to print the
//elements of ia. One version should use a range for to manage the
//iteration, the other two should use an ordinary for loop in one case using
//subscripts and in the other using pointers. In all three programs write all the
//types directly. That is, do not use a type alias, auto, or decltype to
//simplify the code.

#include <iostream>
#include <iterator>

int main () {
    int ia[3][4] = { // three elements; each element is an array of size 4
    {0, 1, 2, 3}, // initializers for the row indexed by 0
    {4, 5, 6, 7}, // initializers for the row indexed by 1
    {8, 9, 10, 11} // initializers for the row indexed by 2
    };

    //One version should use a range for to manage the iteration
    for (int (&p) [4]  : ia) {
        std::cout << "{";
        for (int q : p) {
            std::cout << q << " ";
        }
        std:: cout << "}\n";
    }

    //use an ordinary for loop in one case using subscripts
    for (size_t i = 0; i < 3; ++i) {
        std::cout << "{";
        for (size_t j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std:: cout << "}\n";
    }
    //and in the other using pointers
    for (int (*i)[4] = ia; i != std::end(ia); ++i) {
        std::cout << "{";
        for (int *j = *i; j != std::end(*i); ++j) {
            std::cout << *j << " ";
        }
        std:: cout << "}\n";
    }
}