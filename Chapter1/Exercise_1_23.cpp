//Exercise 1.23: Write a program that reads several transactions and counts
//how many transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main ()  
{
    std::cout << "Enter a transanction you want to count\n";
    Sales_item book, curr;
    std::cin >> book;
    std::cout << "Enter a list of transanctions\n";
    int cnt = 0;
    while (std::cin >> curr) {
        if (book.isbn() == curr.isbn()) {
            cnt++;
        }
    }
    std::cout << book << " occurs " << cnt << " times.\n";
}