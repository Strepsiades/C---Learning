//Exercise 4.10: Write the condition for a while loop that would read ints
//from the standard input and stop when the value read is equal to 42.

#include <iostream>

int main() {
    int curr;
    while (std::cin >> curr){
        std::cout << curr << "\n";
        if (curr == 42) {
            return 0;
        }
    }


}