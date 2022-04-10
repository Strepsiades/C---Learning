//Exercise 6.21: Write a function that takes an int and a pointer to an int
//and returns the larger of the int value or the value to which the pointer
//points. What type should you use for the pointer?
#include <iostream>

int larger(int a, int *p){
    if (a >= *p) return a;
    else return *p;
}

int main(){
    int pval = 9;
    int *p = &pval;
    int a = 8;
    std::cout << larger(a, p) << std::endl;
}