//Exercise 3.35: Using pointers, write a program to set the elements in an
//array to zero.

#include <iostream>

int main(){
    int arr[] {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int cnt = 0; cnt < 5; ++cnt){
        *(ptr + cnt) = 0;
        std::cout << arr[cnt] << " ";
    }
    std::cout << std::endl;
}