//Exercise 3.31: Write a program to define an array of ten ints. Give each
//element the same value as its position in the array.
#include <iostream>

int main(){
    int arr[10];
    for (size_t index = 0; index < 10; ++index) {
        arr[index] = index;
        std::cout << arr[index] << " ";
    }
    std::cout << std::endl;

}