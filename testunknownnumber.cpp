#include <iostream>
int main (){
    std::cout << "type in a series of integers, end with ctrl- Z:" << std::endl;
    int sum = 0;
    int curr = 0;
    while (std::cin >> curr) {
        sum += curr;
    }
    std::cout << sum << std::endl;
}