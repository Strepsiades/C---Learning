#include <iostream>
int main() {
    std::cout << "Type in two integer:" << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    int sum = 0;
    int curr = v1;
    while (curr <= v2) {
        sum += curr;
        curr++;
    }
    std::cout << "The sum of integers in range from " << v1 << " to " << v2 << " is ";
    std::cout << sum << std::endl;
    return 0;

}