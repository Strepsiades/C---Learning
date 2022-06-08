#include <iostream>
#include "Sales_item.h"

int main(){
    //total refers to sum of current transanction
    Sales_item total;
    std::cout << "Enter a list of transanctions:\n";
    if (std::cin >> total) {
        Sales_item curr;
        while (std::cin >> curr) // exists input 
        {
            if (total.isbn() == curr.isbn()) {
                total = total + curr;
            } 
            else {
                //before change to new isbn, print out the current total
                std::cout << total << "\n";
                std::cout << "1111\n";
                total = curr; 
            }       
        }
        std::cout << total << "\n";
    }
    else {
        std::cerr << "No input.\n";
    }
}