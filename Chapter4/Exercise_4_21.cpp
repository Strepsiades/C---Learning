//Exercise 4.21: Write a program to use a conditional operator to find the
//elements in a vector<int> that have odd value and double the value of
//each such element.

#include <iostream>
#include <vector>

using std::vector;

int main () {
    vector<int> v {1, 2, 3, 4, 5};
    for (int &i : v) {
        i % 2 == 0 ? : i *= 2;
        std::cout << i;
    }

}