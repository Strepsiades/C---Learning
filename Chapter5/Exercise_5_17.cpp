//Exercise 5.17: Given two vectors of ints, write a program to determine
//whether one vector is a prefix of the other. For vectors of unequal
//length, compare the number of elements of the smaller vector. For
//example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5,
//8, respectively your program should return true

#include <iostream>
#include <vector>


using std::vector;

int main(){
    vector<int> v1;
    std::cout << "type in the first vector" << std::endl;
    int curr;
    while (std::cin >> curr){
        v1.push_back(curr);
    }
    vector<int> v2;
    std::cout << "type in the second vector" << std::endl;
    std::cin.clear();
    clearerr(stdin);
    while (std::cin >> curr){
        v2.push_back(curr);
    }
    for (decltype(v1.size()) index = 0; index < v1.size(); ++index){
        if (v1[index] != v2[index]){
            std::cout << "false";
            return 0;
        }
    }
    std::cout << "true";
    return 0;
}