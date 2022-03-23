#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book1, book2, sum;
    std::cin >> book1 >> book2;
    sum = book1 + book2;
    std::cout << sum << "\n";
}