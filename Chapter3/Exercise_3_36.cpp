//Exercise 3.36: Write a program to compare two arrays for equality. Write a
//similar program to compare two vectors

#include <iostream>
#include <iterator>

int main(){
    //declare two arrays
    int arr1[]{1,2,3,4,5};
    int arr2[]{1,2,4,5};
    
    //compare array size
    auto length1 = std::end(arr1) - std::begin(arr1);
    auto length2 = std::end(arr2) - std::begin(arr2);
    if (length1 != length2) {
        std::cout << "not same size.\n";
    }
    else {
        for (size_t index = 0; index < length1; ++index){
            if (arr1[index] != arr2[index]) {
                std::cout << "not same element.\n";
                return 0;
            }
        }
        std::cout << "same array\n";
        return 0;
    }


}