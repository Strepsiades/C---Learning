//Write code to change the value of a pointer. Write code to
//change the value to which the pointer points.
#include <iostream>

int main() {
    int val = 12;
    int *p = 0;
    // change the value of a pointer
    p = &val;
    // change the value to which the pointer points.
    *p = 13;
    std::cout << p << "\n";

}