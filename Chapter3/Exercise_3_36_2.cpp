//Exercise 3.36: Write a program to compare two arrays for equality. Write a
//similar program to compare two vectors

#include <iostream>
#include <vector>

using std::vector;

int main(){
    vector<int> v1 {1, 2, 3, 4, 5};
    vector<int> v2 {1, 21, 3, 4, 5};
    //compare array size
    if (v1.size() != v2.size()) {
        std::cout << "not same size.\n";
    }
    else {
        for (decltype(v1.size()) index = 0; index < v1.size(); ++index){
            if (v1[index] != v2[index]) {
                std::cout << "not same element.\n";
                return 0;
            }
        }
        std::cout << "same array\n";
        return 0;
    }


}