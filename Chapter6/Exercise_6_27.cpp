//Exercise 6.27: Write a function that takes an initializer_list<int>
//and produces the sum of the elements in the list.

#include <iostream>

int sumList(std::initializer_list<int> a) {
    int sum = 0;
    for (int i : a){
        sum += i;
    }
    return sum;
}

int main(){
    std::cout << sumList({1,2,3,4,5});

}