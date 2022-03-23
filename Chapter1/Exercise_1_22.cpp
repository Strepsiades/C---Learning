#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;
    std::cin >> sum;
    Sales_item curr;
    while (std::cin >> curr) {
        sum = sum + curr;
    }
    std::cout << sum << "\n";
}