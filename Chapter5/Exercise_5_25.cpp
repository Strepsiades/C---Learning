//Exercise 5.23: Write a program that reads two integers from the standard
//input and prints the result of dividing the first number by the second.

#include <iostream>
#include <stdexcept>
#include <exception>

int main(){
    int a, b;
    while (1){
        std::cout << "type in two numbers\n";
        std::cin >> a >> b;  
        try {
            if (!std::cin) {
                throw std::runtime_error("invalide input");
            }
            else if (b == 0) {
                throw std::runtime_error("The second must not be zero");
            }
            else {
                std::cout << (float)a / b << "\n";
            }
        }
        catch (std::runtime_error err){
            std::cout << err.what() 
                << "\n Try again?(y\\n)" << std::endl;
                char c;
                std::cin.clear();
                std::cin.ignore(100, '\n');
                std::cin >> c;
                if (!std::cin || c == 'n') {
                    break;
                }
        }
    }
}