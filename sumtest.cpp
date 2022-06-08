#include <iostream>
int main () {
    int sum = 0;
    int curr = 50;
    while (curr <= 100) {
        sum += curr;
        curr++;
    }
    std::cout << "the sum of 50 to 100 is ";
    std::cout << sum << std::endl;  
    return 0;
}