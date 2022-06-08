//Exercise 10.14: Write a lambda that takes two ints and returns their sum.

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int (*f) (int a, int b) =  [](int a, int b) -> int { return a + b;} ;
    int c = f(a, b);
    std::cout << c << std::endl;
}